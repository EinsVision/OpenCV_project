#include "OpenCV.h"

void Projects_13::m13_1()
{
	// 13.1 템플릿 매칭 template matching

	String imgPath("D:\\source\\OpenCV_project\\image\\circuit.bmp");
	String patchPath("D:\\source\\OpenCV_project\\image\\crystal.bmp");

	Mat img;
	Mat templ;

	img = imread(imgPath);
	templ = imread(patchPath);

	if (img.empty()|| templ.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	img = img + Scalar(50, 50, 50);
	Mat noise(img.size(), CV_32SC3);
	randn(noise, 0, 10);
	Mat added;
	add(img, noise, img, Mat(), CV_8UC3);
	// 실제 영상 획득 과정에서 발생할 수 있는 잡음과 
	// 조명의 영향을 시뮬레이션하기 위해 입력 영상의 밝기를 
	// 50만큼 증가시키고 표준 편차가 10인 가우시안 잡음을 
	// 추가한 후 템플릿 매칭을 수행
	Mat res, res_norm;
	matchTemplate(img, templ, res, TM_CCOEFF_NORMED);
	imshow("res", res);
	normalize(res, res_norm, 0, 255, NORM_MINMAX, CV_8U);
	imshow("res_norm", res_norm);

	//imshow("img", img);
	double maxv;
	Point maxloc;
	minMaxLoc(res, 0, &maxv, 0, &maxloc);
	cout << "maxv: " << maxv << endl;
	rectangle(img, Rect(maxloc.x, maxloc.y, templ.cols, templ.rows), Scalar(0, 0, 255), 2);
	imshow("img", img);

	waitKey();
}

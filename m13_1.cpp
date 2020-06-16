#include "OpenCV.h"

void Projects_13::m13_1()
{
	// 13.1 ���ø� ��Ī template matching

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
	// ���� ���� ȹ�� �������� �߻��� �� �ִ� ������ 
	// ������ ������ �ùķ��̼��ϱ� ���� �Է� ������ ��⸦ 
	// 50��ŭ ������Ű�� ǥ�� ������ 10�� ����þ� ������ 
	// �߰��� �� ���ø� ��Ī�� ����
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

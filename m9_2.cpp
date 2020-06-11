#include "OpenCV.h"

void Projects_9::m9_2()
{
	// 9.2 캐니 에지 검출기 canny edge detector
	// 히스테리시스 에지 트래킹(hysteresis edge tracking)
	// 강한 에지와 연결되어 있지 않은 약한 에지 픽셀은
	// 최종적으로 에지가 아니라고 판단합니다.
	/*
	void Canny(InputArray image, OutputArray edges,
		double threshold1, double threshold2,
		int apertureSize = 3, bool L2gradient = false);
		// 일반 영상을 입력으로 전달하여 에지를 검출할 때 사용

	void Canny(InputArray dx, InputArray dy, OutputArray edges,
		double threshold1, double threshold2,
		bool L2gradient = false);
		// 두 번째 함수는 이미 x 방향과 y 방향의 미분 영상을 
		// 가지고 있을 때 사용합니다
	*/
	String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}
	
	Mat dst1;
	Mat dst2;
	Canny(gray_img, dst1, 50, 100);
	Canny(gray_img, dst2, 50, 150);

	imshow("img", gray_img);
	imshow("canny1", dst1);
	imshow("canny2", dst2);

	waitKey();
}

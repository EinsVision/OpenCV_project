#include "OpenCV.h"

int lower_hue = 40, upper_hue = 80;
Mat src, src_hsv, mask;

void on_hue_changed(int, void*);

void Projects_10::m10_5()
{
	// 10.5 색상 범위 지정에 의한 영역 분할
	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	src = imread(imgPath, IMREAD_COLOR);

	if (src.empty()) 
	{
		cerr << "Image load failed!" << endl;
		return;
	}

	cvtColor(src, src_hsv, COLOR_BGR2HSV);

	imshow("src", src);

	namedWindow("mask");
	createTrackbar("Lower Hue", "mask", &lower_hue, 179, on_hue_changed);
	createTrackbar("Upper Hue", "mask", &upper_hue, 179, on_hue_changed);
	on_hue_changed(0, 0);

	waitKey();
}

void on_hue_changed(int, void*)
{
	Scalar lowerb(lower_hue, 100, 0);
	Scalar upperb(upper_hue, 255, 255);
	inRange(src_hsv, lowerb, upperb, mask);

	imshow("mask", mask);
}
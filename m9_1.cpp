#include "OpenCV.h"

void Projects_9::m9_1()
{
	// 9.1 마스크 기반 에지 검출 Sobel filter
	String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
	Mat img;
	Mat gray_img;
	Mat dx;
	Mat dy;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	//namedWindow("img");

	Sobel(gray_img, dx, CV_32FC1, 1, 0);
	// Sobel(gray_img, dx, CV_32FC1, 1, 0, FILTER_SCHARR);
	Sobel(gray_img, dy, CV_32FC1, 0, 1);

	Mat fmag, mag;
	magnitude(dx, dy, fmag);
	fmag.convertTo(mag, CV_8UC1);
	Mat edge = mag > 240;
	imshow("mag", mag);
	imshow("img", gray_img);
	imshow("img2", edge);
	waitKey();
}

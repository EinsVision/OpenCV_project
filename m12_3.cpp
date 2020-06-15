#include "OpenCV.h"

void Projects_12::m12_3()
{
	// 12.3 외곽선 검출 findContours

	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	vector<vector<Point>> contours;
	findContours(gray_img, contours, RETR_LIST, CHAIN_APPROX_NONE);
	
	for (int i = 0; i < contours.size(); i++)
	{
		Scalar c(rand() & 255, rand() & 255, rand() & 255);
		drawContours(img, contours, i, c, 2);
	}

	imshow("img", gray_img);
	imshow("ori", img);
	waitKey();
}

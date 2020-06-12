#include "OpenCV.h"

void Projects_10::m10_2()
{
	// 10.2 색 공간 변환
	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	Mat img;
	Mat YCbCr;
	img = imread(imgPath, IMREAD_COLOR);

	cvtColor(img, YCbCr, COLOR_BGR2YCrCb);

	if (YCbCr.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}
	

	imshow("img", img);
	imshow("inv", YCbCr);
	waitKey();
}

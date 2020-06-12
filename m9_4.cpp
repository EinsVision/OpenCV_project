#include "OpenCV.h"

void Projects_9::m9_4()
{
	// 9.4 허프 변환 원 검출 hough transform
	String imgPath("D:\\source\\OpenCV_project\\image\\coins.png");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	Mat blurred;
	blur(gray_img, blurred, Size(3, 3));

	vector<Vec3f> circles;
	HoughCircles(blurred, circles, HOUGH_GRADIENT, 1, 50, 150, 30);
	
	Mat dst;
	cvtColor(gray_img, dst, COLOR_GRAY2BGR);

	for (Vec3f c : circles) 
	{
		Point center(cvRound(c[0]), cvRound(c[1]));
		int radius = cvRound(c[2]);
		circle(dst, center, radius, Scalar(0, 0, 255), 2, LINE_AA);
	}

	imshow("img", dst);
	waitKey();
}

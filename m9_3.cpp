#include "OpenCV.h"

void Projects_9::m9_3()
{
	// 9.3 허프 변환 직선 검출 hough transform
	String imgPath("D:\\source\\OpenCV_project\\image\\building.jpg");
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

	vector<Vec2f> lines;
	HoughLines(dst1, lines, 1, CV_PI / 180, 250);

	Mat dst;
	cvtColor(dst1, dst, COLOR_GRAY2BGR);

	for (size_t i = 0; i < lines.size(); i++) 
	{
		float r = lines[i][0], t = lines[i][1];
		double cos_t = cos(t), sin_t = sin(t);
		double x0 = r * cos_t, y0 = r * sin_t;
		double alpha = 1000;
	
		Point pt1(cvRound(x0 + alpha * (-sin_t)), cvRound(y0 + alpha * cos_t));
		Point pt2(cvRound(x0 - alpha * (-sin_t)), cvRound(y0 - alpha * cos_t));
		line(dst, pt1, pt2, Scalar(0, 0, 255), 2, LINE_AA);
	}

	imshow("img", gray_img);
	imshow("canny1", dst1);
	imshow("canny2", dst);

	waitKey();
}

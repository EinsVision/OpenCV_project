#include "OpenCV.h"

void Projects_14::m14_1()
{
	// 14.1 해리스 코너 검출 방법 Harris corner
	// 지역 특징점 기반 매칭 방법
	String imgPath("D:\\source\\OpenCV_project\\image\\polygon.bmp");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	Mat harris;
	cornerHarris(gray_img, harris, 3, 3, 0.04);
	imshow("cornerHarris", harris);

	Mat harris_norm;
	normalize(harris, harris_norm, 0, 255, NORM_MINMAX, CV_8U);
	imshow("harris_norsm", harris_norm);

	Mat dst;

	for (int j = 1; j < harris.rows - 1; j++)
	{
		for (int i = 1; i < harris.cols - 1; i++)
		{
			if (harris_norm.at<uchar>(j, i) > 120)
			{
				if (harris.at<float>(j, i) > harris.at<float>(j - 1, i) &&
					harris.at<float>(j, i) > harris.at<float>(j + 1, i) &&
					harris.at<float>(j, i) > harris.at<float>(j, i - 1) &&
					harris.at<float>(j, i) > harris.at<float>(j, i + 1))
				{
					circle(gray_img, Point(i, j), 5, Scalar(0, 0, 255), 2);
				}
			}
		}

	}
	cvtColor(gray_img, dst, COLOR_GRAY2BGR);
	imshow("harris_norm", harris_norm);
	imshow("dst", dst);
	waitKey();
}

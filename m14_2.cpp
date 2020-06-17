#include "OpenCV.h"

void Projects_14::m14_2()
{
	// 14.2 FAST 코너 검출 방법

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

	vector<KeyPoint> keypoints;
	FAST(gray_img, keypoints, 60, true);
	Mat dst;
	cvtColor(gray_img, dst, COLOR_GRAY2BGR);
	for (KeyPoint kp : keypoints)
	{
		Point pt(cvRound(kp.pt.x), cvRound(kp.pt.y));
		circle(dst, pt, 5, Scalar(0, 0, 255), 2);
	}

	imshow("dst", dst);
	waitKey();
}

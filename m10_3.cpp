#include "OpenCV.h"

void Projects_10::m10_3()
{
	// 10.3 색상 채널 나누기 split merge
	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	Mat img;
	Mat dst;
	img = imread(imgPath, IMREAD_COLOR);

	if (img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	vector<Mat> bgr_planes;
	split(img, bgr_planes);
	imshow("img", img);
	bgr_planes[0] += 100;
	imshow("B", bgr_planes[0]);
	imshow("G", bgr_planes[1]);
	imshow("R", bgr_planes[2]);

	merge(bgr_planes, dst);
	imshow("dst", dst);
	waitKey();
}

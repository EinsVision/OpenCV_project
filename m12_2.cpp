#include "OpenCV.h"

void Projects_12::m12_2()
{
	// 12.2 레이블링 응용 labeling

	String imgPath("D:\\source\\OpenCV_project\\image\\keyboard.bmp");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	Mat bin;
	threshold(gray_img, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);

	Mat labels, stats, centroids;
	int cnt = connectedComponentsWithStats(bin, labels, stats, centroids);

	Mat dst;
	cvtColor(gray_img, dst, COLOR_GRAY2BGR);

	for (int i = 1; i < cnt; i++)
	{
		int* p = stats.ptr<int>(i);

		if (p[4] < 20) continue;
		// 객체의 픽셀 개수가 20보다 작으면
		// 잡음이라고 간주하고 무시합니다.
		rectangle(dst, Rect(p[0], p[1], p[2], p[3]), Scalar(0, 255, 255));
	}

	imshow("img", dst);
	waitKey();
}

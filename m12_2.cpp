#include "OpenCV.h"

void Projects_12::m12_2()
{
	// 12.2 ���̺� ���� labeling

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
		// ��ü�� �ȼ� ������ 20���� ������
		// �����̶�� �����ϰ� �����մϴ�.
		rectangle(dst, Rect(p[0], p[1], p[2], p[3]), Scalar(0, 255, 255));
	}

	imshow("img", dst);
	waitKey();
}

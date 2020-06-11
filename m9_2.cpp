#include "OpenCV.h"

void Projects_9::m9_2()
{
	// 9.2 ĳ�� ���� ����� canny edge detector
	// �����׸��ý� ���� Ʈ��ŷ(hysteresis edge tracking)
	// ���� ������ ����Ǿ� ���� ���� ���� ���� �ȼ���
	// ���������� ������ �ƴ϶�� �Ǵ��մϴ�.
	/*
	void Canny(InputArray image, OutputArray edges,
		double threshold1, double threshold2,
		int apertureSize = 3, bool L2gradient = false);
		// �Ϲ� ������ �Է����� �����Ͽ� ������ ������ �� ���

	void Canny(InputArray dx, InputArray dy, OutputArray edges,
		double threshold1, double threshold2,
		bool L2gradient = false);
		// �� ��° �Լ��� �̹� x ����� y ������ �̺� ������ 
		// ������ ���� �� ����մϴ�
	*/
	String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
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

	imshow("img", gray_img);
	imshow("canny1", dst1);
	imshow("canny2", dst2);

	waitKey();
}

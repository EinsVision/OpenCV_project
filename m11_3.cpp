#include "OpenCV.h"

void Projects_11::m11_3()
{
	// 11.3 ���� ������ ħ�İ� ��â erosion dilation
	// ħ�� ����: ��ü ������ �ܰ��� ���� ��� ���� ��������
	// ��ü������ ��ü ������ ��ҵǰ� ����� Ȯ��˴ϴ�. 
	// ��â ����: ��ü �ܰ��� Ȯ���ϴ� ����
	// ��ü ������ Ȯ��ǰ�, ��� ������ �پ���. 
	String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
	Mat img;
	img = imread(imgPath, IMREAD_GRAYSCALE);
	Mat dst1;
	Mat dst2;
	Mat bin;
	int th = (int)threshold(img, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);
	//int th = (int)threshold(img, dst_inv, 128, 255, THRESH_BINARY_INV);
	if (img.empty())
	{
		cerr << "Image read failed" << endl;
		return;
	}
	
	erode(bin, dst1, Mat(), Point(-1,-1), 5);
	dilate(bin, dst2, Mat(), Point(-1, -1), 5);

	imshow("src", img);
	imshow("bin", bin);
	imshow("erode", dst1);
	imshow("dilate", dst2);

	waitKey();
}

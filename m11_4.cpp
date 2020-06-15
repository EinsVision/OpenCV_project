#include "OpenCV.h"

void Projects_11::m11_4()
{
	// 11.4 ���� ������ ����� �ݱ� opening closing
	// ���� ����: �Է� ���� ���Ͽ� ħ�� ������ ������ ��, 
	// �ٽ� ��â ������ ����
	// �ݱ� ����: �Է� ���� ���Ͽ� ��â ������ ���� ������ ��, 
	// �ٽ� ħ�� ����
	String imgPath("D:\\source\\OpenCV_project\\image\\milkdrop.bmp");
	Mat img;
	img = imread(imgPath, IMREAD_GRAYSCALE);
	Mat dst1; // ���¿���
	Mat dst2; // �ݱ� ����
	Mat bin;
	int th = (int)threshold(img, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);
	//int th = (int)threshold(img, dst_inv, 128, 255, THRESH_BINARY_INV);
	if (img.empty())
	{
		cerr << "Image read failed" << endl;
		return;
	}

	morphologyEx(bin, dst1, MORPH_OPEN, Mat(), Point(-1, -1),5);
	morphologyEx(bin, dst2, MORPH_CLOSE, Mat(), Point(-1, -1),5);

	imshow("src", img);
	imshow("bin", bin);
	imshow("MORPH_OPEN", dst1);
	imshow("MORPH_CLOSE", dst2);

	waitKey();
}

#include "OpenCV.h"

void on_trackbar(int pos, void* userdata);

void Projects_11::m11_2()
{
	// 11.2 ������ ����ȭ adaptive binarization
	// �ұ����� ���� ȯ�濡�� �Կ��� ������ ���� ����ȭ
	String imgPath("D:\\source\\OpenCV_project\\image\\sudoku.jpg");
	Mat img;
	img = imread(imgPath, IMREAD_GRAYSCALE);
	Mat dst;

	int th = (int)threshold(img, dst, 0, 255, THRESH_BINARY | THRESH_OTSU);
	//int th = (int)threshold(img, dst_inv, 128, 255, THRESH_BINARY_INV);
	if (img.empty())
	{
		cerr << "Image read failed" << endl;
		return;
	}
	namedWindow("dst");
	createTrackbar("Block Size", "dst", 0, 200, on_trackbar, (void*)&img);
	setTrackbarPos("Block Size", "dst", 11);

	imshow("dst", img);
	imshow("ostu", dst);
	waitKey();
}

void on_trackbar(int pos, void* userdata)
{
	Mat src = *(Mat*)userdata;

	int bsize = pos;
	if (bsize % 2 == 0) 
		bsize--;
	if (bsize < 3) bsize = 3;
	
	Mat dst;
	adaptiveThreshold(src, dst, 255, 
		ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY,
		bsize, 5);

	imshow("dst", dst);
}

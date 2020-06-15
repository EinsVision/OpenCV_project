#include "OpenCV.h"

void Projects_11::m11_4()
{
	// 11.4 이진 영상의 열기와 닫기 opening closing
	// 열기 연산: 입력 영상에 대하여 침식 연산을 수행한 후, 
	// 다시 팽창 연산을 수행
	// 닫기 연산: 입력 영상에 대하여 팽창 연산을 먼저 수행한 후, 
	// 다시 침식 연산
	String imgPath("D:\\source\\OpenCV_project\\image\\milkdrop.bmp");
	Mat img;
	img = imread(imgPath, IMREAD_GRAYSCALE);
	Mat dst1; // 오픈연산
	Mat dst2; // 닫기 연산
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

#include "OpenCV.h"

void Projects_11::m11_3()
{
	// 11.3 이진 영상의 침식과 팽창 erosion dilation
	// 침식 연산: 객체 영역의 외곽을 골고루 깎아 내는 연산으로
	// 전체적으로 객체 영역은 축소되고 배경은 확대됩니다. 
	// 팽창 연산: 객체 외곽을 확대하는 연산
	// 객체 영역은 확대되고, 배경 영역은 줄어든다. 
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

#include "OpenCV.h"

void on_threshold(int pos, void* userdata);

void Projects_11::m11_1()
{
	// 11.1 영상의 이진화 binarization
	
	String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
	Mat img;
	img = imread(imgPath, IMREAD_GRAYSCALE);
	Mat dst;
	Mat dst_inv;
	int th = (int)threshold(img, dst, 0, 255, THRESH_BINARY | THRESH_OTSU);
	//int th = (int)threshold(img, dst_inv, 128, 255, THRESH_BINARY_INV);
	if (img.empty())
	{
		cerr << "Image read failed" << endl;
		return;
	}
	cout << th << endl;
	//imshow("img", img); 
	//imshow("binary", dst);
	namedWindow("dst");
	createTrackbar("Threshold", "dst", 0, 255, on_threshold, (void*)&img);
	setTrackbarPos("Threshold", "dst", 128);
	waitKey();
}


void on_threshold(int pos, void* userdata)
{
	Mat src = *(Mat*)userdata;
	cout << "pos: " << pos << endl;
	Mat dst;
	threshold(src, dst, pos, 255, THRESH_BINARY);
	
	imshow("dst", dst);
	
}
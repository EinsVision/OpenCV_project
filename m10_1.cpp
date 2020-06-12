#include "OpenCV.h"

void Projects_10::m10_1()
{
	// 10.1 컬러 영상의 픽셀 값 참조
	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	Mat img;

	img = imread(imgPath, IMREAD_COLOR);

	if (img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	Vec3b& pixel = img.at<Vec3b>(0, 0);
	Vec3b& pixel2 = img.at<Vec3b>(0, 1);

	uchar b1 = pixel[0];
	uchar g1 = pixel[1];
	uchar r1 = pixel[2];

	uchar b4 = pixel2[0];
	uchar g4 = pixel2[1];
	uchar r4 = pixel2[2];

	cout << (int)b1 << " " << (int)g1 << " " << (int)r1 << endl;
	cout << (int)b4 << " " << (int)g4 << " " << (int)r4 << endl;
	cout << endl; 

	Vec3b* ptr = img.ptr<Vec3b>(0);
	uchar b2 = ptr[0][0];
	uchar g2 = ptr[0][1];
	uchar r2 = ptr[0][2];

	uchar b3 = ptr[1][0];
	uchar g3 = ptr[1][1];
	uchar r3 = ptr[1][2];

	cout << (int)b2 << " " << (int)g2 << " " << (int)r2 << endl;
	cout << (int)b3 << " " << (int)g3 << " " << (int)r3 << endl;

	Mat dst(img.rows, img.cols, img.type());

	for (int j = 0; j < img.rows; j++)
	{
		for (int i = 0; i < img.cols; i++)
		{
			Vec3b& p1 = img.at<Vec3b>(j, i);
			Vec3b& p2 = dst.at<Vec3b>(j, i);

			p2[0] = 255 - p1[0];
			p2[1] = 255 - p1[1];
			p2[2] = 255 - p1[2];
		}
	}

	imshow("img", img);
	imshow("inv", dst);
	waitKey();
}

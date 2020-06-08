#include "OpenCV.h"

void Projects_4::m4_12()
{
	// 4.12 ����ũ ����
	if (false)
	{
		Mat src;
		Mat mask;
		String src_path("D:\\source\\OpenCV_project\\image\\lenna.bmp");
		String mask_path("D:\\source\\OpenCV_project\\image\\mask_smile.bmp");
		src = imread(src_path, IMREAD_COLOR);
		mask = imread(mask_path, IMREAD_GRAYSCALE);

		if (src.empty() || mask.empty())
		{
			cerr << "image load failed" << endl;
			return;
		}

		src.setTo(Scalar(0, 255, 255), mask);
		imshow("image", src);
		imshow("mask", mask);
		waitKey(0);
	}
	else
	{
		Mat src;
		Mat mask;
		Mat dst;
		String src_path("D:\\source\\OpenCV_project\\image\\airplane.bmp");
		String mask_path("D:\\source\\OpenCV_project\\image\\mask_plane.bmp");
		String dst_path("D:\\source\\OpenCV_project\\image\\field.bmp");
		src = imread(src_path, IMREAD_COLOR);
		mask = imread(mask_path, IMREAD_GRAYSCALE);
		dst = imread(dst_path, IMREAD_COLOR);

		if (src.empty() || mask.empty() || dst.empty())
		{
			cerr << "Image load failed!" << endl;
			return;
		}

		src.copyTo(dst, mask);
		// Mat::copyTo() �Լ��� mask ������ �ȼ� ���� 
		// 0�� �ƴ� ��ġ������ *this ��� ���� ���� 
		// ��� m���� �����մϴ�.
		imshow("dst", dst);
		imshow("src", src);
		waitKey(0);
	}
}

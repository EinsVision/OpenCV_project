#include "OpenCV.h"

void Projects_10::m10_4()
{
	// 10.4 컬러 히스토그램 평활화 color Histogram equalize
	String imgPath("D:\\source\\OpenCV_project\\image\\candies.png");
	Mat img;
	Mat dst;
	Mat dst2;
	Mat img_Ycbcr;
	img = imread(imgPath, IMREAD_COLOR);
	img_Ycbcr = imread(imgPath, IMREAD_COLOR);
	cvtColor(img_Ycbcr, img_Ycbcr, COLOR_BGR2YCrCb);

	if (img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	vector<Mat> bgr_planes;
	vector<Mat> bgr_planes_ycbcr;

	split(img, bgr_planes);
	split(img_Ycbcr, bgr_planes_ycbcr);

	imshow("img", img);

	equalizeHist(bgr_planes[0], bgr_planes[0]);
	equalizeHist(bgr_planes[1], bgr_planes[1]);
	equalizeHist(bgr_planes[2], bgr_planes[2]);

	equalizeHist(bgr_planes_ycbcr[0], bgr_planes_ycbcr[0]);

	merge(bgr_planes, dst);
	merge(bgr_planes_ycbcr, dst2);
	cvtColor(dst2, dst2, COLOR_YCrCb2BGR);

	imshow("dst", dst);
	imshow("dst2", dst2);

	waitKey();
}

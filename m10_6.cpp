#include "OpenCV.h"

void Projects_10::m10_6()
{
	// 10.6 히스토그램 역투영 histogram backprojection
	// 주어진 히스토그램 모델과 일치하는 
	// 픽셀을 찾아내는 기법을 히스토그램 역투영
	String imgPath("D:\\source\\OpenCV_project\\image\\ref.png");
	String maskPath("D:\\source\\OpenCV_project\\image\\mask.bmp");
	String kidsPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");

	Mat ref, ref_ycrcb, mask;
	ref = imread(imgPath, IMREAD_COLOR);
	mask = imread(maskPath, IMREAD_GRAYSCALE);
	cvtColor(ref, ref_ycrcb, COLOR_BGR2YCrCb);
	//imshow("ref_ycrcb", ref_ycrcb);
	
	Mat hist;
	int channels[] = { 1, 2 };
	int cr_bins = 128; int cb_bins = 128;
	int histSize[] = { cr_bins, cb_bins };
	float cr_range[] = { 0, 256 };
	float cb_range[] = { 0, 256 };
	const float* ranges[] = { cr_range, cb_range };

	calcHist(&ref_ycrcb, 1, channels, mask, hist, 2, histSize, ranges);

	// Apply histogram backprojection to an input image

	Mat src, src_ycrcb;
	src = imread(kidsPath, IMREAD_COLOR);
	cvtColor(src, src_ycrcb, COLOR_BGR2YCrCb);

	Mat backproj;
	calcBackProject(&src_ycrcb, 1, channels, hist, backproj, ranges, 1, true);

	imshow("src", src);
	imshow("hist", hist);
	imshow("backproj", backproj);
	waitKey();
}

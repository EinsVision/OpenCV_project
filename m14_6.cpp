#include "OpenCV.h"

void Projects_14::m14_6()
{
	// 14.6 영상 이어 붙이기(image stitching)

	String imgPath1("D:\\source\\OpenCV_project\\image\\stitching\\img1.jpg");
	String imgPath2("D:\\source\\OpenCV_project\\image\\stitching\\img2.jpg");
	String imgPath3("D:\\source\\OpenCV_project\\image\\stitching\\img3.jpg");
	
	vector<Mat> imgs;
	Mat img = imread(imgPath1);
	imgs.push_back(img);
	img = imread(imgPath2);
	imgs.push_back(img);
	img = imread(imgPath3);
	imgs.push_back(img);

	if (img.empty()) 
	{
		cerr << "Image load failed!" << endl;
		return;
	}

	Ptr<Stitcher> stitcher = Stitcher::create();

	Mat dst;
	Stitcher::Status status = stitcher->stitch(imgs, dst);

	if (status != Stitcher::Status::OK)
	{
		cerr << "Error on stitching!" << endl;
		return;
	}

	imwrite("result.jpg", dst);

	imshow("dst", dst);

	waitKey();
}

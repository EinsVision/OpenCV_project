#include "OpenCV.h"

void Projects_14::m14_3()
{
	// 14.3 Scale Invariant Feature Transform (SIFT) 크기 불변 특징점 알고리즘
	// 크기가 다른 영상에서도 지속적으로 코너를 
	// 검출할 수 있는 크기 불변 코너 추출 방법이다.
	String imgPath("D:\\source\\OpenCV_project\\image\\box_in_scene.png");
	Mat img;
	Mat gray_img;

	img = imread(imgPath);
	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	Ptr<Feature2D> feature = ORB::create();

	vector<KeyPoint> keypoints;
	feature->detect(gray_img, keypoints);
	Mat desc;
	feature->compute(gray_img, keypoints, desc);

	cout << "keypoints.size(): " << keypoints.size() << endl;
	cout << "desc.size(): " << desc.size() << endl;

	Mat dst;
	drawKeypoints(gray_img, keypoints, dst, Scalar::all(-1), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

	imshow("dst", dst);
	waitKey();
}

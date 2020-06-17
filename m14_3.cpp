#include "OpenCV.h"

void Projects_14::m14_3()
{
	// 14.3 Scale Invariant Feature Transform (SIFT) ũ�� �Һ� Ư¡�� �˰���
	// ũ�Ⱑ �ٸ� ���󿡼��� ���������� �ڳʸ� 
	// ������ �� �ִ� ũ�� �Һ� �ڳ� ���� ����̴�.
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

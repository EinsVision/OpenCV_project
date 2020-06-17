#include "OpenCV.h"

void Projects_14::m14_4()
{
	// 14.4 OpenCV Æ¯Â¡Á¡ ¸ÅÄª
	
	String imgPath("D:\\source\\OpenCV_project\\image\\box_in_scene.png");
	String patchPath("D:\\source\\OpenCV_project\\image\\box.png");

	Mat img;
	Mat gray_img;
	Mat patch; 

	img = imread(imgPath);
	patch = imread(patchPath);

	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty()|| patch.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	
	Ptr<Feature2D> feature = ORB::create();

	vector<KeyPoint> keypoints1, keypoints2;
	Mat desc1, desc2;
	feature->detectAndCompute(patch, Mat(), keypoints1, desc1);
	feature->detectAndCompute(gray_img, Mat(), keypoints2, desc2);

	Ptr<DescriptorMatcher> matcher = BFMatcher::create(NORM_HAMMING);

	vector<DMatch> matches;
	matcher->match(desc1, desc2, matches);

	std::sort(matches.begin(), matches.end());
	vector<DMatch> good_matches(matches.begin(), matches.begin() + 50);

	Mat dst;
	drawMatches(patch, keypoints1, gray_img, keypoints2, good_matches, dst,
		Scalar::all(-1), Scalar::all(-1), vector<char>(),
		DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);

	imshow("dst", dst);

	waitKey();
}

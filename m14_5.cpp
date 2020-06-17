#include "OpenCV.h"

void Projects_14::m14_5()
{
	// 14.5 findHomography

	String imgPath("D:\\source\\OpenCV_project\\image\\box_in_scene.png");
	String patchPath("D:\\source\\OpenCV_project\\image\\box.png");

	Mat img;
	Mat gray_img;
	Mat patch;

	img = imread(imgPath);
	patch = imread(patchPath);

	cvtColor(img, gray_img, COLOR_BGR2GRAY);

	if (gray_img.empty() || patch.empty())
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

	vector<Point2f> pts1, pts2;
	for (size_t i = 0; i < good_matches.size(); i++) {
		pts1.push_back(keypoints1[good_matches[i].queryIdx].pt);
		pts2.push_back(keypoints2[good_matches[i].trainIdx].pt);
	}

	Mat H = findHomography(pts1, pts2, RANSAC);

	vector<Point2f> corners1, corners2;
	corners1.push_back(Point2f(0, 0));
	corners1.push_back(Point2f(gray_img.cols - 1.f, 0));
	corners1.push_back(Point2f(gray_img.cols - 1.f, gray_img.rows - 1.f));
	corners1.push_back(Point2f(0, gray_img.rows - 1.f));
	perspectiveTransform(corners1, corners2, H);

	vector<Point> corners_dst;
	for (Point2f pt : corners2) 
	{
		corners_dst.push_back(Point(cvRound(pt.x + gray_img.cols), cvRound(pt.y)));
	}

	polylines(dst, corners_dst, true, Scalar(0, 255, 0), 2, LINE_AA);
	imshow("dst", dst);

	waitKey();
}

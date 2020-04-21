#include "OpenCV.h"

using namespace std;
using namespace cv;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;
	Mat img;

	img = imread("D:\\source\\OpenCV_project\\image\\beautiful.jpg");

	if (img.empty())
	{
		cerr << "Image Load Failed !" << endl;
		return -1;
	}

	cv::namedWindow("image");
	cv::imshow("image", img);
	cv::waitKey();

	cout << "Success Imshow()" << endl;
	destroyWindow("image");

	return 0;
}
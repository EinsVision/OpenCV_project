#include "OpenCV.h"

void on_mouse87(int event, int x, int y, int flags, void* userdata);
Point2f srcPts[4], dstPts[4];
Mat gray_img;

void Projects_8::m8_7()
{
    // 8.7 투시 변환 perspective transform
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;

	Mat dst;
    Mat dst2;
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    // imshow("img", gray_img);

    setMouseCallback("src", on_mouse87);
	imshow("img", gray_img);
    waitKey();
}

void on_mouse87(int event, int x, int y, int flags, void*)
{
	static int cnt = 0;

	if (event == EVENT_LBUTTONDOWN) {
		if (cnt < 4) {
			srcPts[cnt++] = Point2f(x, y);

			circle(gray_img, Point(x, y), 5, Scalar(0, 0, 255), -1);
			
			imshow("src", gray_img);

			if (cnt == 4) {
				int w = 200, h = 300;

				dstPts[0] = Point2f(0, 0);
				dstPts[1] = Point2f(w - 1, 0);
				dstPts[2] = Point2f(w - 1, h - 1);
				dstPts[3] = Point2f(0, h - 1);

				Mat pers = getPerspectiveTransform(srcPts, dstPts);

				Mat dst;
				warpPerspective(gray_img, dst, pers, Size(w, h));

				imshow("dst", dst);
			}
		}
	}
}
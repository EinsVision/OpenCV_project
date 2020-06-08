#include "OpenCV.h"

void Projects_4::m4_14()
{
	// 4.14 유용한 OpenCV 함수 사용법
    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath, IMREAD_GRAYSCALE);

    if (img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");

    cout << "sum: " << (int)sum(img)[0] << endl;
    cout << "(B) mean: " << (int)mean(img)[0] << endl;
    cout << "(G) mean: " << (int)mean(img)[1] << endl;
    cout << "(R) mean: " << (int)mean(img)[2] << endl;

    double minVal, maxVal;
    Point minPos, maxPos;
    minMaxLoc(img, &minVal, &maxVal, &minPos, &maxPos);

    cout << "minVal: " << minVal << " at " << minPos << endl;
    cout << "maxVal: " << maxVal << " at " << maxPos << endl;

    cout << "cvRound(2.5): " << cvRound(2.5) << endl;
    cout << "cvRound(2.51): " << cvRound(2.51) << endl;
    cout << "cvRound(3.4999): " << cvRound(3.4999) << endl;
    cout << "cvRound(3.5): " << cvRound(3.5) << endl;

    cout << "cvCeil(2.5): " << cvCeil(2.5) << endl;
    cout << "cvCeil(2.51): " << cvCeil(2.51) << endl;
    cout << "cvCeil(3.4999): " << cvCeil(3.4999) << endl;
    cout << "cvCeil(3.5): " << cvCeil(3.5) << endl;

    cout << "cvFloor(2.5): " << cvFloor(2.5) << endl;
    cout << "cvFloor(2.51): " << cvFloor(2.51) << endl;
    cout << "cvFloor(3.4999): " << cvFloor(3.4999) << endl;
    cout << "cvFloor(3.5): " << cvFloor(3.5) << endl;

    imshow("img", img);

    if (waitKey(0) == 27)
    {
        return;
    }
}

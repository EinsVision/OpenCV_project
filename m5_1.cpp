#include "OpenCV.h"

void Projects_5::m5_1()
{
    // 5.1 그레이스케일 영상 다루기
    Mat img;
    Mat gray_img;
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    // img = imread(imgPath, IMREAD_GRAYSCALE);
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    imshow("img", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}

#include "OpenCV.h"

void Projects_5::m5_2()
{
    // 5.2 영상의 밝기 조절
    Mat img;
    Mat gray_img;
    Mat brightness;
    Mat darkness;
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
    // 영상의 밝기 조절 (Image Processing 부분)
    add(gray_img, 100, brightness);
    subtract(gray_img, 100, darkness);

    /////////////////////////////////////////
    imshow("bri", brightness);
    imshow("dark", darkness);
    imshow("img", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}

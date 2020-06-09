#include "OpenCV.h"

void Projects_7::m7_6()
{
    // 7.6 양방향 필터 bilateralFilter
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    Mat dst;

    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    imshow("img", gray_img);

    Mat noise(gray_img.size(), CV_32SC1);
    randn(noise, 0, 10);

    add(gray_img, noise, dst, Mat(), CV_8U);

    imshow("dst", dst);

    Mat Gblur;
    GaussianBlur(dst, Gblur, Size(), 5);
    imshow("Gblur", Gblur);
    imwrite("outputImg_Gb.jpg", Gblur);

    Mat Bfilter;
    bilateralFilter(dst, Bfilter, -1, 10, 5);
    imshow("Bfilter", Bfilter);
    imwrite("outputImg_BF.jpg", Bfilter);

    if (waitKey(0) == 27)
    {
        return;
    }
}
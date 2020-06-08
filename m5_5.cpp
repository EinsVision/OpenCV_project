#include "OpenCV.h"

void Projects_5::m5_5()
{
    // 5.5 기본적인 명암비 조절 방법
    Mat img;
    Mat gray_img;
    Mat contrast;

    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    contrast = gray_img.clone();

    if (contrast.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");

    float s = 2.f;
    contrast = gray_img * s;

    imshow("img", gray_img);
    imshow("con", contrast);
    
    if (waitKey(0) == 27)
    {
        return;
    }
}


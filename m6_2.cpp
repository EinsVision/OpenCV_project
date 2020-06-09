#include "OpenCV.h"

void Projects_6::m6_2()
{
    // 6.2 영상의 논리 연산
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    Mat dst; 
    Mat bitwise_and2;
    Mat bitwise_or2;
    Mat bitwise_xor2;
    Mat bitwise_not1;

    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);
    GaussianBlur(gray_img, dst, Size(7, 7), 0, 0);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }
    bitwise_and(gray_img, dst, bitwise_and2);

    namedWindow("img");
    imshow("img", gray_img);
    imshow("bitwise_and", bitwise_and2);

    if (waitKey(0) == 27)
    {
        return;
    }
}
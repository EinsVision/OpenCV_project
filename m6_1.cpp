#include "OpenCV.h"

void Projects_6::m6_1()
{
    // 6.1 영상의 산술 연산
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    Mat blur;
    Mat dst_add; 
    Mat dst_sub;

    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);
    GaussianBlur(gray_img, blur, Size(7, 7), 0, 0);

    if (blur.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }
    namedWindow("img");

    // dst_add = gray_img + blur;
    add(gray_img, blur, dst_add);
    //addWeighted(gray_img, 0.1, blur, 0.9, 0, dst_add);
    subtract(gray_img, blur, dst_sub);
    imshow("img", dst_add);
    imshow("blur", gray_img);
    imshow("sub", dst_sub);

    if (waitKey(0) == 27)
    {
        return;
    }
}
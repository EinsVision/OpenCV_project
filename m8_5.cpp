#include "OpenCV.h"

void Projects_8::m8_5()
{
    // 8.5 회전 변환 rotation transformation
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
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
    
    Point2f cp(gray_img.cols / 2.f, gray_img.rows / 2.f);
    Mat M = getRotationMatrix2D(cp, 20, 1);

    warpAffine(gray_img, dst, M, Size());
    rotate(gray_img, dst2, ROTATE_180);
    imshow("img", dst);
    imshow("ime", dst2);
    // imwrite("M.jpg", M);
    if (waitKey(0) == 27)
    {
        return;
    }
}
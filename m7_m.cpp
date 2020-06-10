#include "OpenCV.h"

void Projects_7::m7_m()
{
    // 7.7 미디언 필터(median filter)
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

    int num = (int)(gray_img.total() * 0.1);
    for (int i = 0; i < num; i++)
    {
        int x = rand() % gray_img.cols;
        int y = rand() % gray_img.rows;
        
        gray_img.at<uchar>(y, x) = (i % 2) * 255;
    }

    namedWindow("img");
    medianBlur(gray_img, dst, 3);

    imshow("ori", gray_img);
    imshow("dst", dst);
    imwrite("outImage2.jpg", dst);

    if (waitKey(0) == 27)
    {
        return;
    }

}
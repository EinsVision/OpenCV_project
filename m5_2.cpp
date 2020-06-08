#include "OpenCV.h"

void Projects_5::m5_2()
{
    // 5.2 ������ ��� ����
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
    // ������ ��� ���� (Image Processing �κ�)
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

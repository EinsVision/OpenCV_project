#include "OpenCV.h"

void Projects_5::m5_6()
{
    // 5.6 ȿ������ ��Ϻ� ���� ���
    Mat img;
    Mat gray_img;
    Mat contrast;
    Mat constrast2;

    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");

    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    contrast = gray_img.clone();
    constrast2 = gray_img.clone();

    if (contrast.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");

    float s = 2.f;
    float alpha = 1.f;
    // �� = 1.0 �� ��� ��Ϻ� ���� ��� ������ �����մϴ�.
    Scalar mean_s = mean(gray_img)[0];
   
    contrast = gray_img * s;
    constrast2 = gray_img + (gray_img - mean_s) * alpha;

    imshow("img", gray_img);
    imshow("con", contrast);
    imshow("con2", constrast2);

    if (waitKey(0) == 27)
    {
        return;
    }
}


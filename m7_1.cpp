#include "OpenCV.h"

void Projects_7::m7_1()
{
    // 7.1 엠보싱 필터링
    // 엠보싱 필터 마스크
    // -1 -1 0
    // -1  0 1
    //  0  1 1
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    float data[] = { -1, -1, 0, -1, 0, 1, 0, 1, 1 };
    float data1[] = { -1, 0, 0, 0, 0, 0, 0, 0, 1 };
    float data2[] = { 1, 1, 0, 1, 0, -1, 0, -1, -1 };
    Mat emboss(3, 3, CV_32FC1, data); // mask 생성
    Mat dst;

    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    filter2D(gray_img, dst, -1, emboss, Point(-1, -1), 128);
    // 여섯 번째 인자에 128을 지정하여 
    // 필터링 결과 영상에 128을 더합니다.
    imshow("img", dst);
    imshow("ori", gray_img);

    imwrite("outImage2.jpg", dst);

    if (waitKey(0) == 27)
    {
        return;
    }

}


// Basic type

/*
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;

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
*/
#include "OpenCV.h"

void Projects_7::m7_3()
{
    // 7.3 가우시안 필터 
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
    for (int sigma = 1; sigma <= 5; sigma++)
    {
        GaussianBlur(gray_img, dst, Size(), (double)sigma);
        String text = format("sigma = %d", sigma);
        putText(dst, text, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0,
        Scalar(255), 1, LINE_AA);
        
        imshow("dst", dst);
        waitKey(0);
    }

    //imwrite("outputImg.jpg", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}
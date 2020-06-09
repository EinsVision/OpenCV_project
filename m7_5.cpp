#include "OpenCV.h"

void Projects_7::m7_5()
{
    // 7.5 영상과 잡음 모델 (가우시안 잡음)
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
    
    for (int stddev = 10; stddev <= 30; stddev += 10)
    {
        Mat noise(gray_img.size(), CV_32SC1);
        randn(noise, 0, stddev);
        
        add(gray_img, noise, dst, Mat(), CV_8U);
        
        String desc = format("stddev = %d", stddev);
        putText(dst, desc, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);
        imshow("dst", dst);
        waitKey();
    }

    //imwrite("outputImg.jpg", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}
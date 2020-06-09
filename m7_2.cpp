#include "OpenCV.h"

void Projects_7::m7_2()
{
    // 7.2 블러링: 영상 부드럽게 하기 (평균값 필터) 
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
    for (int ksize = 3; ksize <= 7; ksize += 2)
    {
        blur(gray_img, dst, Size(ksize, ksize));
        String desc = format("Mean: %dx%d", ksize, ksize);
        putText(dst, desc, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0,
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
    imwrite("outputImg.jpg", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
*/
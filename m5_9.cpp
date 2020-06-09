#include "OpenCV.h"

Mat calcGrayHistst(const Mat& img)
{
    CV_Assert(img.type() == CV_8UC1);

    Mat hist;
    int channels[] = { 0 };
    int dims = 1;
    const int histSize[] = { 256 };
    float grayLevel[] = { 0,256 };
    const float* ranges[] = { grayLevel };
    calcHist(&img, 1, channels, noArray(), hist, dims, histSize, ranges);

    return hist;
}

Mat getGrayHistImagest(const Mat& hist)
{
    CV_Assert(hist.type() == CV_32FC1);
    CV_Assert(hist.size() == Size(1, 256));

    double histMax;
    minMaxLoc(hist, 0, &histMax);

    Mat imgHist(100, 256, CV_8UC1, Scalar(255));
    for (int i = 0; i < 256; i++)
    {
        line(imgHist, Point(i, 100),
            Point(i, 100 - cvRound(hist.at<float>(i, 0) * 100 / histMax)), Scalar(0));
    }

    return imgHist;
}


void Projects_5::m5_9()
{
    // 5.9 히스토그램 평활화
    Mat img;
    Mat gray_img;
    Mat gray;
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);
    gray = gray_img.clone();

    namedWindow("img");
    // 히스토그램 평활화!
    equalizeHist(gray_img, gray_img);

    imshow("img", gray_img);
    imshow("oriimg", gray);
    imshow("srcHist", getGrayHistImagest(calcGrayHistst(gray_img)));
    imshow("oriHist", getGrayHistImagest(calcGrayHistst(gray)));


    if (waitKey(0) == 27)
    {
        return;
    }
}
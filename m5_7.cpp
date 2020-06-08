#include "OpenCV.h"

Mat calcGrayHist(const Mat& img)
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

Mat getGrayHistImage(const Mat& hist)
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

void Projects_5::m5_7()
{
    // 5.7 히스토그램 구하기
    Mat img;
    Mat gray_img;
    Mat contrast;
    Mat constrast2;
    Mat hist;

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
    // α = 1.0 인 경우 명암비가 높은 결과 영상을 생성합니다.
    Scalar mean_s = mean(gray_img)[0];

    contrast = gray_img * s;
    constrast2 = gray_img + (gray_img - mean_s) * alpha;
    imshow("srcHist2", getGrayHistImage(calcGrayHist(constrast2)));
    imshow("ori_hist", getGrayHistImage(calcGrayHist(gray_img)));
    imshow("img", gray_img);
    imshow("con", contrast);
    imshow("con2", constrast2);
    
    if (waitKey(0) == 27)
    {
        return;
    }
}
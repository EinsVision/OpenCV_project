#include "OpenCV.h"

Mat calcGrayHists(const Mat& img)
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

Mat getGrayHistImages(const Mat& hist)
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


void histgoram_stretching()
{
    Mat src = imread("hawkes.bmp", IMREAD_GRAYSCALE);

    if (src.empty()) {
        cerr << "Image load failed!" << endl;
        return;
    }

    double gmin, gmax;
    minMaxLoc(src, &gmin, &gmax);

    Mat dst = (src - gmin) * 255 / (gmax - gmin);

    imshow("src", src);
    imshow("srcHist", getGrayHistImages(calcGrayHists(src)));

    imshow("dst", dst);
    imshow("dstHist", getGrayHistImages(calcGrayHists(dst)));

    waitKey();
    destroyAllWindows();
}

void Projects_5::m5_8()
{
    // 5.8 히스토그램 스트레칭
    Mat img;
    Mat gray_img;
    Mat contrast;
    Mat constrast2;
    Mat hist;

    String imgPath("D:\\source\\OpenCV_project\\image\\hawkes.bmp");

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

    double gmin, gmax;
    minMaxLoc(gray_img, &gmin, &gmax);

    Mat strenth = (gray_img - gmin) * 255 / (gmax - gmin);
    imshow("streng", strenth);
    imshow("dstHist", getGrayHistImages(calcGrayHists(strenth)));

    imshow("srcHist2", getGrayHistImages(calcGrayHists(constrast2)));
    imshow("ori_hist", getGrayHistImages(calcGrayHists(gray_img)));
    imshow("img", gray_img);
    imshow("con", contrast);
    imshow("con2", constrast2);

    
    if (waitKey(0) == 27)
    {
        return;
    }
}
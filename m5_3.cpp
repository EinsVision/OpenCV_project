#include "OpenCV.h"

void Projects_5::m5_3()
{
    // 5.3 영상의 밝기 조절 직접 구현하기
    Mat img;
    Mat gray_img;
    Mat brightness;
    Mat darkness;
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    // img = imread(imgPath, IMREAD_GRAYSCALE);
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    brightness = gray_img.clone();

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    // 영상의 밝기 조절 (Image Processing 부분)
    for (int j = 0; j < gray_img.rows; j++)
    {
        for (int i = 0; i < gray_img.cols; i++)
        {
            int v = gray_img.at<uchar>(j, i) + 100;

            if (false)
            {
                brightness.at<uchar>(j, i) =
                    (v > 255) ? (255) : (v < 0 ? 0 : v);
            }
            else
            {
                brightness.at<uchar>(j, i) =
                    saturate_cast<uchar>(gray_img.at<uchar>(j, i) + 100);
            }
        }
    }

    /////////////////////////////////////////
    imshow("bri", brightness);
    //imshow("dark", darkness);
    imshow("img", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}

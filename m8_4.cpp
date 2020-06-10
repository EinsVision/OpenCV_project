#include "OpenCV.h"

void Projects_8::m8_4()
{
    // 8.4 크기 변환 scale transformation
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    Mat dst;
    Mat dst2;
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    resize(gray_img, dst, Size(1920, 1280), 0, 0, INTER_CUBIC);
    resize(gray_img, dst2, Size(1920, 1280), 0, 0, INTER_LANCZOS4);
    imshow("img", dst);
    imshow("img2", dst2);

    // imwrite("M.jpg", M);
    if (waitKey(0) == 27)
    {
        return;
    }
}
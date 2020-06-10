#include "OpenCV.h"

void Projects_8::m8_2()
{
    // 8.2 이동 변환 translation transformation
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
    
    Mat M = Mat_<double>({ 2, 3 }, { 1, 0, 150, 0, 1, 100 });
    warpAffine(gray_img, dst, M, Size());

    imshow("img", dst);
    // imwrite("M.jpg", M);
    if (waitKey(0) == 27)
    {
        return;
    }
}
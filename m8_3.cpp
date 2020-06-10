#include "OpenCV.h"

void Projects_8::m8_3()
{
    // 8.3 전단 변환 shear transformation
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

    double mx = 0.3;
    double my = 0.3;
    Mat M = Mat_<double>({ 2, 3 }, { 1, mx, 0, 0, 1, 0 });
    Mat M2 = Mat_<double>({ 2, 3 }, { 1, 0, 0, my, 1, 0 });
    warpAffine(gray_img, dst, M, Size(cvRound(gray_img.cols + gray_img.rows * mx), gray_img.rows));
    warpAffine(gray_img, dst2, M2, Size(cvRound(gray_img.cols ), gray_img.rows + gray_img.cols * my));
    // 영상을 확대해서 출력한다.
    imshow("img", dst);
    imshow("img2", dst2);

    // imwrite("M.jpg", M);
    if (waitKey(0) == 27)
    {
        return;
    }
}
#include "OpenCV.h"

void Projects_8::m8_6()
{
    // 8.6 ´ëÄª º¯È¯ flip transformation
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
    imshow("img", gray_img);
    int flipCode[] = { 1,0,-1 };
    for (int i = 0; i < 3; i++)
    {
        flip(gray_img, dst, flipCode[i]);
        String desc = format("flipCode: %d", flipCode[i]);
        putText(dst, desc, 
            Point(10, 30), 
            FONT_HERSHEY_SIMPLEX, 1.0, 
            Scalar(255, 0, 0), 1, LINE_AA);
        imshow("dst", dst);
        waitKey();
    }

    
}
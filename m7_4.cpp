#include "OpenCV.h"

void Projects_7::m7_4()
{
    // 7.4 ����� ����ũ ���� (������)
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
    for (int sigma = 1; sigma <= 5; sigma++)
    {
        Mat blurred;
        GaussianBlur(gray_img, blurred, Size(), sigma);
      
        float alpha = 0.5f;
        dst = (1 + alpha) * gray_img - alpha * blurred;
        
        String desc = format("sigma: %d", sigma);
        putText(dst, desc, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0,
            Scalar(255), 1, LINE_AA);
        
        imshow("dst", dst);
        waitKey();
        
    }

    //imwrite("outputImg.jpg", gray_img);

    if (waitKey(0) == 27)
    {
        return;
    }
}
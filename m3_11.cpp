#include "OpenCV.h"

void Projects_3::m3_11()
{
    // 3.11 행렬연산
    cv::Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = cv::imread(imgPath);

    Mat img2;
    img2 = img1.clone();
    img2.setTo(130);

    Mat result;
    result = img1 + img2;
    imshow("Mat Plus: ", result);

    result = img1 - img2;
    imshow("Mat Minus: ", result);

    result = img1 * 2;
    imshow("Mat Mul: ", result);

    img2.setTo(13);
    result = img1 / img2;
    imshow("Mat div: ", result);

    imshow("img1.mul", img1.mul(img2));
    
    waitKey();
}

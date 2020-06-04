#include "OpenCV.h"

void Projects_3::m3_8()
{
    // 3.8 영상의 부분 영상 반전 
    Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = imread(imgPath);

    Mat img2;
    img2 = img1(Rect(300, 0, 140, 140));

    // 부분 영상을 추출할 때 주의할 점은 
    // Mat 클래스의 괄호 연산자를 이용하여 얻은 부분 영상이 
    // 독립된 메모리 공간을 확보하여 복사하는 깊은 복사가 아니라, 
    // 픽셀 데이터를 공유하는 얕은 복사 형식이라는 점입니다.
    
    Mat img3 = img1(Rect(300, 0, 140, 140)).clone();

    img2 = ~img2; // 반전영상

    imshow("ori", img1);
    imshow("image_part", img2);
    imshow("image_clone", img3);
    waitKey();
}

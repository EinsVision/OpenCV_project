#include "OpenCV.h"

void Projects_3::m3_7()
{
    // 3.7 행렬의 복사 (얕은 복사, 깊은 복사)
    Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = imread(imgPath);

    Mat img2(img1); // 복사 생성자(얕은 복사)
    // 픽셀 데이터를 공유

    Mat img3 = img1; // 대입 연산자(얕은 복사)
    // 픽셀 데이터를 공유

    // 메모리 공간을 새로 할당하여 픽셀 데이터 전체를 복사
    // Mat::clone() 함수는 
    // 자기 자신과 동일한 Mat 객체를 완전히 새로 만들어서 반환
    Mat img4 = img1.clone(); // 깊은 복사
    
    Mat img5;
    img1.copyTo(img5);  // 깊은 복사
    
    img1.setTo(Scalar(0, 255, 255));

    // cv::namedWindow("Input Image");
    // cv::imshow("Input Image", img1);
    imshow("img1", img1);
    imshow("img2", img2); //img1의 픽셀 데이터를 공유하기 때문에 나타난 결과
    imshow("img3", img3); //img1의 픽셀 데이터를 공유하기 때문에 나타난 결과
    imshow("img4", img4);
    imshow("img5", img5);
    cv::waitKey();
}

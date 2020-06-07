#include "OpenCV.h"

void Projects_4::m4_7()
{
    // 4.7 문자열 출력하기 함수
    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    if (img.empty())
    {
        // 이미지가 존재하지 않거나 혹은 
        // 이미지가 손상되어 제대로 불러오지 못한 경우
        // Mat 클래스의 멤버 함수 Mat::empty()는 true를 반환합니다.
        std::cerr << "Image load failed" << std::endl;
        return;
    }
    if (false)
    {
        putText(img, "FONT_HERSHEY_SIMPLEX", Point(20, 50), FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 0, 255));
        putText(img, "FONT_HERSHEY_PLAIN", Point(20, 100), FONT_HERSHEY_PLAIN, 1, Scalar(0, 0, 255));
        putText(img, "FONT_HERSHEY_DUPLEX", Point(20, 150), FONT_HERSHEY_DUPLEX, 1, Scalar(0, 0, 255));
        putText(img, "FONT_HERSHEY_COMPLEX", Point(20, 200), FONT_HERSHEY_COMPLEX, 1, Scalar(255, 0, 0));
        putText(img, "FONT_HERSHEY_TRIPLEX", Point(20, 250), FONT_HERSHEY_TRIPLEX, 1, Scalar(255, 0, 0));
        putText(img, "FONT_HERSHEY_COMPLEX_SMALL", Point(20, 300), FONT_HERSHEY_COMPLEX_SMALL, 1, Scalar(255, 0, 0));
        putText(img, "FONT_HERSHEY_SCRIPT_SIMPLEX", Point(20, 350), FONT_HERSHEY_SCRIPT_SIMPLEX, 1, Scalar(255, 0, 255));
        putText(img, "FONT_HERSHEY_SCRIPT_COMPLEX", Point(20, 400), FONT_HERSHEY_SCRIPT_COMPLEX, 1, Scalar(255, 0, 255));
        putText(img, "FONT_HERSHEY_COMPLEX | FONT_ITALIC", Point(20, 450), FONT_HERSHEY_COMPLEX | FONT_ITALIC, 1, Scalar(255, 0, 0));

    }
    
    const String text = "Hello, OpenCV";
    int fontFace = FONT_HERSHEY_TRIPLEX;
    double fontScale = 2.0;
    int thickness = 1;

    Size sizeText = getTextSize(text, fontFace, fontScale, thickness, 0);
    Size sizeImg = img.size();

    Point org((sizeImg.width - sizeText.width) / 2, (sizeImg.height + sizeText.height) / 2);
    putText(img, text, org, fontFace, fontScale, Scalar(255, 255, 0), thickness);
    //rectangle(img, org, org + Point(sizeText.width, -sizeText.height), Scalar(0, 255, 0), 1);

    cv::namedWindow("Input Image");
    cv::imshow("Input Image", img);

    if (waitKey(0) == 27) // ESC key
    {
        return;
    }
}

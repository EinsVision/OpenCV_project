#include "OpenCV.h"

void Projects_4::m4_5()
{
    // 4.5 직선그리기 함수
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

    line(img, Point(250, 50), Point(350, 100), Scalar(0, 0, 255), 2, LINE_4);
    line(img, Point(250, 70), Point(350, 120), Scalar(255, 0, 255), 2, LINE_8);
    line(img, Point(250, 90), Point(350, 140), Scalar(255, 0, 0), 2, LINE_AA);

    arrowedLine(img, Point(50, 200), Point(150, 200), Scalar(0, 0, 255), 2);
    arrowedLine(img, Point(50, 250), Point(550, 250), Scalar(255, 0, 255), 2, LINE_4, 0, 0.05);
    arrowedLine(img, Point(50, 300), Point(350, 300), Scalar(255, 0, 0), 2, LINE_8, 0, 0.05);

    drawMarker(img, Point(50, 350), Scalar(255, 255, 255), MARKER_CROSS, 20, 3, LINE_AA);
    drawMarker(img, Point(100, 350), Scalar(255, 255, 255), MARKER_TILTED_CROSS, 20, 3, LINE_AA);
    drawMarker(img, Point(150, 350), Scalar(255, 255, 255), MARKER_STAR, 20, 3, LINE_AA);
    drawMarker(img, Point(200, 350), Scalar(255, 255, 255), MARKER_DIAMOND, 20, 3, LINE_AA);
    drawMarker(img, Point(250, 350), Scalar(255, 255, 255), MARKER_SQUARE, 20, 3, LINE_AA);
    drawMarker(img, Point(300, 350), Scalar(255, 255, 255), MARKER_TRIANGLE_UP, 20, 3, LINE_AA);
    drawMarker(img, Point(350, 350), Scalar(255, 255, 255), MARKER_TRIANGLE_DOWN, 20, 3, LINE_AA);

    cv::namedWindow("Input Image");
    cv::imshow("Input Image", img);

    if (waitKey(0) == 27) // ESC key
    {
        return;
    }
}

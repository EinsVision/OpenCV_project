#include "OpenCV.h"

void Projects_4::m4_6()
{
    // 4.6 도형 그리기 함수
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

    rectangle(img, Rect(50, 50, 100, 50), Scalar(0, 0, 255), 2);
    rectangle(img, Rect(50, 150, 100, 50), Scalar(0, 0, 128), -1);

    circle(img, Point(300, 120), 30, Scalar(255, 255, 0), -1, LINE_AA);
    circle(img, Point(300, 120), 60, Scalar(255, 0, 0), 3, LINE_AA);

    ellipse(img, Point(120, 300), Size(60, 30), 20, 0, 270, Scalar(255, 255, 0), FILLED, LINE_AA);
    ellipse(img, Point(120, 300), Size(100, 50), 20, 0, 360, Scalar(0, 255, 0), 2, LINE_AA);

    vector<Point> pts;
    pts.push_back(Point(250, 250)); pts.push_back(Point(300, 250));
    pts.push_back(Point(300, 300)); pts.push_back(Point(350, 300));
    pts.push_back(Point(350, 350)); pts.push_back(Point(250, 350));
    polylines(img, pts, true, Scalar(255, 0, 255), 2);

    cv::namedWindow("Input Image");
    cv::imshow("Input Image", img);

    if (waitKey(0) == 27) // ESC key
    {
        return;
    }
}

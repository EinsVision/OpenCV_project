#include "OpenCV.h"

void Projects_4::m4_6()
{
    // 4.6 ���� �׸��� �Լ�
    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    if (img.empty())
    {
        // �̹����� �������� �ʰų� Ȥ�� 
        // �̹����� �ջ�Ǿ� ����� �ҷ����� ���� ���
        // Mat Ŭ������ ��� �Լ� Mat::empty()�� true�� ��ȯ�մϴ�.
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

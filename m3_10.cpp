#include "OpenCV.h"

void Projects_3::m3_10()
{
    // 3.10 행렬 정보 참조하기
    // Mat::rows는 영상의 세로 픽셀 크기이고,
    // Mat::cols는 영상의 가로 픽셀 크기를 나타냅니다. 
    cv::Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    cout << "Width: " << img.cols << endl;
    cout << "Height: " << img.rows << endl;

    int channels = img.channels();
    cout << "channels: " << channels << endl;

    int depth = img.depth();
    cout << "depth: " << depth << endl;

    size_t total = img.total(); // 전체 원소 개수
    cout << "total: " << total << endl;

    int data_type = img.type(); // type 출력
    cout << "type: " << data_type << endl;
    if (img.type() == CV_8UC1)
        cout << "img is a grayscale image." << endl;
    else if (img.type() == CV_8UC3)
        cout << "img is a truecolor image." << endl;
    else
        cerr << "img error" << endl;


}

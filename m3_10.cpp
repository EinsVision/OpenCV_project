#include "OpenCV.h"

void Projects_3::m3_10()
{
    // 3.10 ��� ���� �����ϱ�
    // Mat::rows�� ������ ���� �ȼ� ũ���̰�,
    // Mat::cols�� ������ ���� �ȼ� ũ�⸦ ��Ÿ���ϴ�. 
    cv::Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    cout << "Width: " << img.cols << endl;
    cout << "Height: " << img.rows << endl;

    int channels = img.channels();
    cout << "channels: " << channels << endl;

    int depth = img.depth();
    cout << "depth: " << depth << endl;

    size_t total = img.total(); // ��ü ���� ����
    cout << "total: " << total << endl;

    int data_type = img.type(); // type ���
    cout << "type: " << data_type << endl;
    if (img.type() == CV_8UC1)
        cout << "img is a grayscale image." << endl;
    else if (img.type() == CV_8UC3)
        cout << "img is a truecolor image." << endl;
    else
        cerr << "img error" << endl;


}

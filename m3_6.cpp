#include "OpenCV.h"

void Projects_3::m3_6()
{
    // 3.6 Mat ��ü ����
    Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = imread(imgPath);

    Mat img2(480, 640, CV_8UC1);    // unsigned char, 1-channel
    Mat img3(480, 640, CV_8UC3);    // unsigned char, 3-channels
    // ���� ũ��, ���� ũ�� ���� ���� �������.

    Mat img4(Size(640, 480), CV_8UC3); // Size(width, height)

    Mat img5(480, 640, CV_8UC1, Scalar(128));  // initial values, 128
    Mat img6(480, 640, CV_8UC3, Scalar(0,0,255)); // initial values, red
   
    Mat mat1 = Mat::zeros(480, 640, CV_8UC1);
    Mat mat2 = Mat::ones(480, 640, CV_8UC3);
    Mat mat3 = Mat::eye(480, 640, CV_32SC1);
    
    float data[] = { 1,2,3,4,5,6 };
    Mat mat4(2, 3, CV_32FC1, data);

    Mat_<float> mat5_(2, 3);
    mat5_ << 1, 2, 3, 4, 5, 6;
    Mat mat5 = mat5_;

    Mat mat6 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);

    // ��� �ִ� Mat ��ü �Ǵ� 
    // �̹� ������ Mat ��ü�� ���ο� ����� �Ҵ�
    mat4.create(256, 256, CV_8UC3);
    mat5.create(4, 4, CV_32FC1);

    // �ʱ�ȭ �ϴ� �ڵ�
    mat4 = Scalar(255, 0, 0);
    mat5.setTo(1.f);

    /*
    cv::namedWindow("Input Image2");
    cv::imshow("Input Image2", mat2);
    cv::waitKey();
    */
}

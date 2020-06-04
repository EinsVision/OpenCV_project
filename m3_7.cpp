#include "OpenCV.h"

void Projects_3::m3_7()
{
    // 3.7 ����� ���� (���� ����, ���� ����)
    Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = imread(imgPath);

    Mat img2(img1); // ���� ������(���� ����)
    // �ȼ� �����͸� ����

    Mat img3 = img1; // ���� ������(���� ����)
    // �ȼ� �����͸� ����

    // �޸� ������ ���� �Ҵ��Ͽ� �ȼ� ������ ��ü�� ����
    // Mat::clone() �Լ��� 
    // �ڱ� �ڽŰ� ������ Mat ��ü�� ������ ���� ���� ��ȯ
    Mat img4 = img1.clone(); // ���� ����
    
    Mat img5;
    img1.copyTo(img5);  // ���� ����
    
    img1.setTo(Scalar(0, 255, 255));

    // cv::namedWindow("Input Image");
    // cv::imshow("Input Image", img1);
    imshow("img1", img1);
    imshow("img2", img2); //img1�� �ȼ� �����͸� �����ϱ� ������ ��Ÿ�� ���
    imshow("img3", img3); //img1�� �ȼ� �����͸� �����ϱ� ������ ��Ÿ�� ���
    imshow("img4", img4);
    imshow("img5", img5);
    cv::waitKey();
}

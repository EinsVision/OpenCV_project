#include "OpenCV.h"

void Projects_3::m3_12()
{
    // 3.12 ũ�� �� Ÿ�� ��ȯ �Լ�
    // Mat::convertTo()
    // ������ ��Ȯ���� ���̱� ���Ͽ� 
    // �ȼ� ���� �������� �ƴ� float, double ���� �Ǽ������� 
    // ��ȯ�Ͽ� ���� ������ ����
    cv::Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = cv::imread(imgPath, IMREAD_GRAYSCALE);
    
    Mat img1f;
    img1.convertTo(img1f, CV_32FC1);

    imshow("TestImg1", img1);
    imshow("TestImgf", img1f);

    // reshape �Լ� : ����� ����� ����
    uchar data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    Mat mat1(3, 4, CV_8UC1, data1); // 3 x 4  ��� ����
    Mat mat2 = mat1.reshape(0, 1);  // 1 X 12 ��ķ� ��ȯ

    cout << "mat1:\n" << mat1 << endl;
    cout << "mat2:\n" << mat2 << endl;

    mat1.resize(5, 100);
    cout << "resize(): \n" << mat1 << endl;

    Mat mat3 = Mat::ones(1, 4, CV_8UC1) * 255;
    mat1.push_back(mat3);
    cout << "push_back(): \n" << mat1 << endl;

    mat1.pop_back();
    cout << "pop_back(): \n" << mat1 << endl;

    waitKey();
}

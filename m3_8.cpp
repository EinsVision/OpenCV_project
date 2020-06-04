#include "OpenCV.h"

void Projects_3::m3_8()
{
    // 3.8 ������ �κ� ���� ���� 
    Mat img1;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img1 = imread(imgPath);

    Mat img2;
    img2 = img1(Rect(300, 0, 140, 140));

    // �κ� ������ ������ �� ������ ���� 
    // Mat Ŭ������ ��ȣ �����ڸ� �̿��Ͽ� ���� �κ� ������ 
    // ������ �޸� ������ Ȯ���Ͽ� �����ϴ� ���� ���簡 �ƴ϶�, 
    // �ȼ� �����͸� �����ϴ� ���� ���� �����̶�� ���Դϴ�.
    
    Mat img3 = img1(Rect(300, 0, 140, 140)).clone();

    img2 = ~img2; // ��������

    imshow("ori", img1);
    imshow("image_part", img2);
    imshow("image_clone", img3);
    waitKey();
}

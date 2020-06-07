#include "OpenCV.h"

void Projects_4::m4_8()
{
    // 4.8 Ű���� �̺�Ʈ ó�� �Լ�
    // waitKey() �Լ��� ���ڸ� �������� �ʰų�
    // 0 �Ǵ� ������ �����ϸ� Ű �Է��� ���� ������ 
    // ������ ��ٸ���, ����ڰ� Ű���带 ������ 
    // ���� Ű�� �ƽ�Ű �ڵ带 ��ȯ�ϸ鼭 �Լ��� �����մϴ�.
    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    namedWindow("img");
    imshow("img", img);

    while (true) 
    { // 27�� esc�� �ƽ�Ű �ڵ� ���Դϴ�.  
      // ����� Ű���忡�� Enter Ű�� �ƽ�Ű �ڵ�� 13�̰�, 
      // Backspace Ű�� 8, 
      // Tab Ű�� 9�Դϴ�.
        if (waitKey() == 27 || waitKey() == 13 || waitKey() == 8)
        {
            break;
        }
    }
}

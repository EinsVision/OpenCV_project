#include "OpenCV.h"

void Projects_3::m3_13()
{
    // 3.13 Vec Ŭ����
    cv::Vec<uchar, 3> p1;
    Vec3b p2;

    p1.val[0] = 255;
    p1.val[1] = 255;
    p1.val[2] = 255;

    p2.val[0] = 0;
    p2.val[1] = 0;
    p2.val[2] = 0;

    Vec3b p3(255, 0, 0);
    // p3[2] = 255; �� ������ ���°� �ȴ�.

    p1[0] = 100; // p1�� ù��° ������ ���� ������ �� �̷��� ǥ���� �� ����.

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    Vec3b result;

    result = p1 + p3;

    cout << result << endl;

}

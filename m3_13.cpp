#include "OpenCV.h"

void Projects_3::m3_13()
{
    // 3.13 Vec 클래스
    cv::Vec<uchar, 3> p1;
    Vec3b p2;

    p1.val[0] = 255;
    p1.val[1] = 255;
    p1.val[2] = 255;

    p2.val[0] = 0;
    p2.val[1] = 0;
    p2.val[2] = 0;

    Vec3b p3(255, 0, 0);
    // p3[2] = 255; 로 설정한 형태가 된다.

    p1[0] = 100; // p1의 첫번째 원소의 값을 변경할 때 이렇게 표현할 수 있음.

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    Vec3b result;

    result = p1 + p3;

    cout << result << endl;

}

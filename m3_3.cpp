#include "OpenCV.h"

void Projects_3::m3_3()
{
    // 3.3 간략화한 Rect_ 클래스 정의와 이름 재정의
    Rect rc1;
    cout << "rc1: " << rc1 << endl;
    // [0 x 0 from(0, 0)]

    // Rect(x, y, width, height) 
    Rect rc2(10, 10, 60, 40);
    cout << "rc2: " << rc2 << endl;
    // [60 x 40 from(10, 10)]

    Rect rc3 = rc1 + Size(50, 40);
    cout << "rc3: " << rc3 << endl;
    // [50 x 40 from(0, 0)]

    Rect rc4 = rc2 + Point(10, 10);
    cout << "rc4: " << rc4 << endl;
    // [60 x 40 from(20, 20)]

    // 두 개의 사각형 객체끼리 & 연산을 수행하면 
    // 두 사각형이 교차하는 사각형 영역을 반환합니다.
    Rect rc5 = rc3 & rc4;
    cout << "rc5: " << rc5 << endl;

    // 두 사각형 객체끼리 | 연산을 수행하면 
    // 두 사각형을 모두 포함하는 최소 크기의 사각형을 반환
    Rect rc6 = rc3 | rc4;
    cout << "rc6: " << rc6 << endl;
}

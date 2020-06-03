#include "OpenCV.h"

void Projects_3::m3_1()
{
    // 3.1 간략화한 Point_ 클래스 정의와 이름 재정의
    Point pt1; // 기본 생성자 사용
    pt1.x = 5;
    pt1.y = 10;

    Point pt2(10, 30);
    Point pt3 = pt1 + pt2;
    cout << "pt3: " << pt3.x << " " << pt3.y << endl;

    Point pt4 = pt1 * 2;
    cout << "pt4: " << pt4.x << " " << pt4.y << endl;

    int dot1 = pt1.dot(pt2); // 5 * 10 + 10 * 30 = 350
    cout << "dot() : " << dot1 << endl;

    bool com1 = (pt1 == pt2);
    cout << boolalpha;

    cout << "compare: "<<com1 << endl;
    cout << pt4 << endl;

}

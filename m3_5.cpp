#include "OpenCV.h"

void Projects_3::m3_5()
{
    // 3.5 간략화한 Range 클래스 정의
    Range r1(0, 10); // 0부터 9까지 범위를 표현하고 10은 포함하지 않음
    cout << r1 << endl;

    cout << r1.size() << endl;
    cout << r1.start << endl;
    cout << r1.end << endl;
    cout << r1.all << endl;

    cout << boolalpha << endl;
    cout << r1.empty() << endl;

}

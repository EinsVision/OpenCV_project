#include "OpenCV.h"

void Projects_3::m3_5()
{
    // 3.5 ����ȭ�� Range Ŭ���� ����
    Range r1(0, 10); // 0���� 9���� ������ ǥ���ϰ� 10�� �������� ����
    cout << r1 << endl;

    cout << r1.size() << endl;
    cout << r1.start << endl;
    cout << r1.end << endl;
    cout << r1.all << endl;

    cout << boolalpha << endl;
    cout << r1.empty() << endl;

}

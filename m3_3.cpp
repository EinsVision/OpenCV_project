#include "OpenCV.h"

void Projects_3::m3_3()
{
    // 3.3 ����ȭ�� Rect_ Ŭ���� ���ǿ� �̸� ������
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

    // �� ���� �簢�� ��ü���� & ������ �����ϸ� 
    // �� �簢���� �����ϴ� �簢�� ������ ��ȯ�մϴ�.
    Rect rc5 = rc3 & rc4;
    cout << "rc5: " << rc5 << endl;

    // �� �簢�� ��ü���� | ������ �����ϸ� 
    // �� �簢���� ��� �����ϴ� �ּ� ũ���� �簢���� ��ȯ
    Rect rc6 = rc3 | rc4;
    cout << "rc6: " << rc6 << endl;
}

#include "OpenCV.h"

void Projects_3::m3_2()
{
    // 3.2 ����ȭ�� Size_ Ŭ���� ���ǿ� �̸� ������
    Size sz1;
    sz1.width = 5;
    sz1.height = 10;

    Size sz2(20, 10);

    Size sz3 = sz1 + sz2;
    cout << sz3 << endl;

    Size sz4 = sz1 * 2;
    cout << sz4 << endl;

    int area1 = sz4.area();
    int arearatio = sz2.aspectRatio();

    cout << area1 << " " << arearatio << endl;
}

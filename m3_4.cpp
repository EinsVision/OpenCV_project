#include "OpenCV.h"

void Projects_3::m3_4()
{
    // 3.4 ����ȭ�� RotatedRect Ŭ���� ����
    // �߽� ��ǥ��(40, 30), 
    // ũ��� 40��20, �ð� �������� 30�Ƹ�ŭ ȸ���� �簢�� 
    // ��ü�� ���� �ڵ带 �̿��Ͽ� ������ �� �ֽ��ϴ�.
    // ��� float ���̴�.
    RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
    Point2f pts[4];
    rr1.points(pts); // ȸ���� �簢���� �� ������ ��ǥ
    cout << pts[0] << endl;
    cout << pts[1] << endl;
    cout << pts[2] << endl;
    cout << pts[3] << endl;

    Rect br = rr1.boundingRect();
    cout << br << endl;

    Rect2f brf = rr1.boundingRect2f();
    cout << brf << endl;
}

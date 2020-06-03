#include "OpenCV.h"

void Projects_3::m3_4()
{
    // 3.4 간략화한 RotatedRect 클래스 정의
    // 중심 좌표가(40, 30), 
    // 크기는 40×20, 시계 방향으로 30°만큼 회전된 사각형 
    // 객체는 다음 코드를 이용하여 생성할 수 있습니다.
    // 모두 float 형이다.
    RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
    Point2f pts[4];
    rr1.points(pts); // 회전된 사각형의 네 꼭지점 좌표
    cout << pts[0] << endl;
    cout << pts[1] << endl;
    cout << pts[2] << endl;
    cout << pts[3] << endl;

    Rect br = rr1.boundingRect();
    cout << br << endl;

    Rect2f brf = rr1.boundingRect2f();
    cout << brf << endl;
}

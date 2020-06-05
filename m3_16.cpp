#include "OpenCV.h"

void Projects_3::m3_16()
{
    // 3.16 OutputArray 클래스
    // _OutputArray 클래스는 클래스 계층적으로
    // _InputArray 클래스를 상속받아 만들어졌습니다. 
    // 그러므로 _OutputArray 클래스도 Mat 또는 vector<T> 같은 
    // 타입의 객체로부터 생성될 수 있습니다. 
    // 다만 _OutputArray 클래스는 새로운 행렬을 생성하는
    // _OutputArray::create() 함수가 추가적으로 정의되어 있습니다.
    // 그래서 OpenCV의 많은 영상 처리 함수는 
    // 결과 영상을 저장할 새로운 행렬을 먼저 생성한 후, 
    // 영상 처리 결과를 저장하는 형태로 구현되어 있습니다.

}

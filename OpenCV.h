#pragma once
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

class Projects_2
{
public:
	void m2_1();  // 2.1 opencv version check
	void m2_2();  // 2.2 영상을 화면에 출력하기
};
class Projects_3
{
public:
	void m3_1();  // 3.1 Point_ 클래스 정의와 이름 재정의
	void m3_2();  // 3.2 Size_ 클래스 정의와 이름 재정의
	void m3_3();  // 3.3 Rect_ 클래스 정의와 이름 재정의
	void m3_4();  // 3.4 RotatedRect 클래스 정의
	void m3_5();  // 3.5 Range 클래스 정의
	void m3_6();  // 3.6 Mat 객체 생성
	void m3_7();  // 3.7 행렬의 복사 (얕은 복사, 깊은 복사)
	void m3_8();  // 3.8 영상의 부분 영상 반전 
	void m3_9();  // 3.9 행렬의 원소 값 참조 
	void m3_10(); // 3.10 행렬 정보 참조하기 
	void m3_11(); // 3.11 행렬연산
	void m3_12(); // 3.12 크기 및 타입 변환 함수
	void m3_13(); // 3.13 Vec 클래스
	void m3_14(); // 3.14 Scalar 클래스
	void m3_15(); // 3.15 InputArray 클래스
	void m3_16(); // 3.16 OutputArray 클래스
};
class Projects_4
{
public:
	void m4_1();  // 4.1 VideoCapture 클래스
	void m4_2();  // 4.2 카메라 입력 처리하기
	void m4_3();  // 4.3 동영상 파일 처리하기
	void m4_4();  // 4.4 동영상 파일 저장하기
	void m4_5();  // 4.5 직선그리기 함수
	void m4_6();  // 4.6 도형 그리기 함수
	void m4_7();  // 4.7 문자열 출력하기 함수
	void m4_8();  // 4.8 키보드 이벤트 처리 함수
	void m4_9();  // 4.9 마우스 이벤트 처리 함수
	void m4_10();  // 4.10 트랙바 사용하기
	void m4_11();  // 4.11 FileStorage 클래스
	void m4_12();  // 4.12 마스크 연산
	void m4_13();  // 4.13 연산시간 측정
	void m4_14();  // 4.14 유용한 OpenCV 함수 사용법
};
class Projects_5
{
public:
	void m5_1();  // 5.1 그레이스케일 영상 다루기
	void m5_2();  // 5.2 영상의 밝기 조절
	void m5_3();  // 5.3 영상의 밝기 조절 직접 구현하기
	void m5_4();  // 5.4 트랙바를 이용한 영상의 밝기 조절
	void m5_5();  // 5.5 기본적인 명암비 조절 방법
	void m5_6();  // 5.6 효과적인 명암비 조절 방법
	void m5_7();  // 5.7 히스토그램 구하기
	void m5_8();  // 5.8 히스토그램 스트레칭
	void m5_9();  // 5.9 히스토그램 평활화
};
class Projects_6
{
public:
	void m6_1();  // 6.1 영상의 산술 연산
	void m6_2();  // 6.2 영상의 논리 연산
};
class Projects_7
{
public:
	void m7_1();  // 7.1 엠보싱 필터링
	void m7_2();  // 7.2 평균값 필터
	void m7_3();  // 7.3 가우시안 필터
	void m7_4();  // 7.4 언샤프 마스크 필터 (샤프닝)
	void m7_5();  // 7.5 영상과 잡음 모델
	void m7_6();  // 7.6 양방향 필터 bilateralFilter
	void m7_m();  // 7.7 미디언 필터(median filter)
};
class Projects_8
{
public:
	void m8_1();  // 8.1 어파인 변환 warpAffine
	void m8_2();  // 8.2 이동 변환 translation transformation
	void m8_3();  // 8.3 전단 변환 shear transformation
	void m8_4();  // 8.4 크기 변환 scale transformation
	void m8_5();  // 8.5 회전 변환 rotation transformation
	void m8_6();  // 8.6 대칭 변환 flip transformation
	void m8_7();  // 8.7 투시 변환 perspective transform
};
class Projects_9
{
public:
	void m9_1();  // 9.1 마스크 기반 에지 검출 Sobel filter
	void m9_2();  // 9.2 캐니 에지 검출기 canny edge detector
	void m9_3();  // 9.3 허프 변환 직선 검출 hough transform
	void m9_4();  // 9.4 허프 변환 원 검출 hough transform
};
class Projects_10
{
public:
	void m10_1();  // 10.1 컬러 영상의 픽셀 값 참조
	void m10_2();  // 10.2 색 공간 변환
	void m10_3();  // 10.3 색상 채널 나누기 split merge
	void m10_4();  // 10.4 컬러 히스토그램 평활화 color Histogram equalize
	void m10_5();  // 10.5 색상 범위 지정에 의한 영역 분할
};
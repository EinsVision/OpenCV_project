#include "OpenCV.h"

void Projects_3::m3_9()
{
    // 3.9 행렬의 원소 값 참조
    // 1. Mat::at() 멤버 함수
    // 2. Mat::ptr() 멤버 함수
    // 3. MatIterator_ 반복자 사용 방법
    /*
        template<typename _Tp> 
        _Tp& Mat::at(int y, int x)
        
        • y

        참조할 행 번호

        • x

        참조할 열 번호

        • 반환값

        (_Tp & 타입으로 형 변환된) y번째 행, x번째 열의 원소 값(참조)
    */
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);
    cout << "mat1.rows: " << mat1.rows << endl;
    cout << "mat1.cols: " << mat1.cols << endl;

    // at() 접근해 값을 바꿔보자.
    for (int j = 0; j<mat1.rows; j++)
    {
        for (int i = 0; i<mat1.cols; i++)
        {
            mat1.at<uchar>(j, i)++;
        }
        cout << endl;
    }

    // at() 접근을 통해 값을 출력해보자. 
    for (int j = 0; j<mat1.rows; j++)
    {
        for (int i = 0; i<mat1.cols; i++)
        {
            cout << static_cast<int>(mat1.at<uchar>(j, i)) <<" ";
        }
        cout << endl;
    }

    // ptr() 접근을 통해 값을 바꿔보자.
    for (int j = 0; j < mat1.rows; j++)
    {
        uchar* p = mat1.ptr<uchar>(j); // y번째 행의 시작 주소를 반환
        for (int i = 0; i < mat1.cols; i++)
        {
            p[i]++;
        }
    }

    // ptr() 접근을 통해 값을 출력해보자.
    for (int j = 0; j < mat1.rows; j++)
    {
        uchar* p = mat1.ptr<uchar>(j); // y번째 행의 시작 주소를 반환
        for (int i = 0; i < mat1.cols; i++)
        {
            //p[i]++;
            cout << static_cast<int>(p[i]) << " ";
        }
        cout << endl;
    }

    // MatIterator_ 반복자 사용 방법: 행렬 크기에 상관없이 
    // 행렬 전체 원소를 차례대로 참조하는 방식입니다.
    for (MatIterator_<uchar> it = mat1.begin<uchar>(); 
        it != mat1.end<uchar>(); ++it) 
    {
        (*it)++;
    }
    
    int div = 0;
    for (MatIterator_<uchar> it = mat1.begin<uchar>();
        it != mat1.end<uchar>(); ++it)
    {
        ++div;

        if (div % 4 == 0)
        {
            cout << static_cast<int>((*it)) << " ";
            cout << endl;
        }
        else
        {
            cout << static_cast<int>((*it)) << " ";
        }
        
    }
}

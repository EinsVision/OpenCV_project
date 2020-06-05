#include "OpenCV.h"

void printMat(InputArray _mat)
{
    Mat mat = _mat.getMat();
    cout << mat << endl;
}

void Projects_3::m3_15()
{
    // 3.15 InputArray Å¬·¡½º
    uchar data1[] = { 1,2,3,4,5,6 };
    Mat mat1(2, 3, CV_8U, data1);
    printMat(mat1);

    vector<float> vec1 = { 1.2f, 3.4f, -2.1f };
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;

    printMat(vec1);
}

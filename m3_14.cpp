#include "OpenCV.h"

void Projects_3::m3_14()
{
    // 3.14 Scalar Å¬·¡½º
    Scalar gray = 128;
    cout << "gray: " << gray << endl; // [128, 0, 0, 0]

    Scalar yellow(146, 255, 44);
    cout << "yellow: " << yellow << endl; // [0, 255, 255, 0]

    yellow.val[0] = 0;
    yellow[1] = 255;
    yellow[2] = 255;

    Mat img1(256, 256, CV_8UC3, yellow);

    imshow("yello", img1);

    waitKey();

}

#include "OpenCV.h"

void Projects_4::m4_2()
{
    // 4.2 카메라 입력 처리하기
    VideoCapture cap;
    cap.open(0);

    if (!cap.isOpened())
    {
        cerr << "Camera doesn't open";
        return;
    }
    // 카메라 장치를 사용할 수 있다면, 
    // 카메라 장치로부터 프레임을 받아 올 수 있습니다. 
    Mat frame;
    while (true)
    {
        cap >> frame;
        if (frame.empty())
        {
            cout << "(frame.empty())" << endl;
            break;
        }
        imshow("frame", frame);
        // waitKey(10); // 10ms 동안 기다린 후, 
        // 다음 프레임을 받아 오게 됩니다.
       if (waitKey(10) == 27)
        {
            break;
        }
    }

    destroyAllWindows();
}

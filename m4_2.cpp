#include "OpenCV.h"

void Projects_4::m4_2()
{
    // 4.2 ī�޶� �Է� ó���ϱ�
    VideoCapture cap;
    cap.open(0);

    if (!cap.isOpened())
    {
        cerr << "Camera doesn't open";
        return;
    }
    // ī�޶� ��ġ�� ����� �� �ִٸ�, 
    // ī�޶� ��ġ�κ��� �������� �޾� �� �� �ֽ��ϴ�. 
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
        // waitKey(10); // 10ms ���� ��ٸ� ��, 
        // ���� �������� �޾� ���� �˴ϴ�.
       if (waitKey(10) == 27)
        {
            break;
        }
    }

    destroyAllWindows();
}

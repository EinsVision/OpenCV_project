#include "OpenCV.h"

void Projects_4::m4_3()
{
    // 4.3 동영상 파일 처리하기
    std::string videoPath("D:\\source\\OpenCV_project\\image\\Vacation - 415.mp4");
    
    VideoCapture cap;
    cap.open(videoPath);
    
    double fps = cap.get(CAP_PROP_FPS);
    Mat frame;
    Mat inverse;

    while (true)
    {
        cap >> frame;

        if (frame.empty())
        {
            cerr << "Can't read video" << endl;
            break;
        }
        inverse = ~frame;

        imshow("Video", frame);
        imshow("inverse", inverse);

        cout << "fps: " << fps << endl;

        if (waitKey(fps) == 27) // ESC key
        {
            break;
        }
    }

    destroyAllWindows();
}

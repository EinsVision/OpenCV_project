#include "OpenCV.h"

void Projects_4::m4_4()
{
    // 4.4 동영상 파일 저장하기
    std::string videoPath("D:\\source\\OpenCV_project\\image\\Vacation - 415.mp4");

    VideoCapture cap;
    cap.open(videoPath);
    double fps = cap.get(CAP_PROP_FPS);

    VideoWriter videowrite;
    int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
    videowrite.open("output.mp4", fourcc, fps, Size(640, 360));
    
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
        videowrite << inverse;

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

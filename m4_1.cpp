#include "OpenCV.h"

void videoCapture_get()
{ // ��Ʈ�Ͽ� ����� ī�޶�� ���� ������ ����ϱ�
    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        cerr << "Camera open failed! " << endl;
        return;
    }

    Mat frame;
    Mat inverse;
    Mat readMat;

    while (true)
    {
        cap >> frame;

        if (frame.empty())
        {
            break;
        }

        inverse = ~frame;
        cap.read(readMat);
        readMat += 30;

        imshow("frame", frame);
        imshow("inversed", inverse);
        imshow("readMat", readMat);

        // VideoCapture::get() �Լ��� ī�޶� �Ǵ�
        // ������ ���� �Ӽ��� double �ڷ������� ��ȯ�մϴ�.
        cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
        cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;
        cout << "Frame CAP_PROP_FPS: " << cap.get(CAP_PROP_FPS) << endl;
        cout << "Frame CAP_PROP_POS_AVI_RATIO: " << cvRound(cap.get(CAP_PROP_POS_AVI_RATIO)) << endl;

        if (waitKey(10) == 27)
        {
            break;
        }
    }

    destroyAllWindows();
}

void Projects_4::m4_1()
{
    // 4.1 VideoCapture Ŭ����
    // videoCapture_get();
    cv::Mat img;
    Mat img2;

    // ����� ���������� ���� ������ ����ϱ�
    std::string videoPath("D:\\source\\OpenCV_project\\image\\Vacation - 415.mp4");

    VideoCapture cap1(videoPath);
    VideoCapture cap2(videoPath);

    if (!cap1.isOpened())
    {
        cerr << "Camera open failed! " << endl;
        return;
    }

    while (true)
    {
        cap1 >> img;
        cap2 >> img2;
        if (img.empty())
        {
            break;
        }
        
        // ������ ������ ��� 53��° / 3��° frame���� �̵�
        imshow("img", img);
        cap1.set(CAP_PROP_POS_FRAMES, 53);

        imshow("img2", img2);
        cap2.set(CAP_PROP_POS_FRAMES, 3);
        
        if (waitKey(10) == 27)
        {
            break;
        }
    }

    
}

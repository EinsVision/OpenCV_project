#include "OpenCV.h"

void on_level_change(int pos, void* userdata);

void Projects_4::m4_10()
{
    // 4.10 트랙바 사용하기

    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    if (img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    createTrackbar("level", "img", 0, 16, on_level_change, (void*)&img);

    imshow("img", img);

    if (waitKey(0) == 27)
    {
        return;
    }

}

void on_level_change(int pos, void* userdata)
{
    Mat img = *(Mat*)userdata;
    Mat clo = img.clone();
    Mat result;
    //img.setTo(pos * 16);
    if (true)
    {
        result = clo * pos;
    }
    
    imshow("img", result);
}
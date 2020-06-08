#include "OpenCV.h"

void on_brightness(int pos, void* userdata);

void Projects_5::m5_4()
{
    // 5.4 Ʈ���ٸ� �̿��� ������ ��� ����
    Mat img;
    Mat gray_img;
    Mat brightness;
    
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    // img = imread(imgPath, IMREAD_GRAYSCALE);
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    brightness = gray_img.clone();

    if (brightness.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");

    /////////////////////////////////////////
    createTrackbar("brightness", "img", 0, 100, on_brightness, (void*)&brightness);
    
    on_brightness(0, (void*)&brightness);
    // ó�� � ȭ���� ������ ���� ���ϱ� ���ؼ� ȣ���Ѵ�.
    
    if (waitKey(0) == 27)
    {
        return;
    }
}

void on_brightness(int pos, void* userdata)
{
    Mat src = *(Mat*)userdata;
    Mat dst = src + pos;
    imshow("img", dst);
}

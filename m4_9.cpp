#include "OpenCV.h"

Point ptOld;
Point ptRigt;
void on_mouse(int event, int x, int y, int flags, void*);
Mat img;

void Projects_4::m4_9()
{
    // 4.9 마우스 이벤트 처리 함수
   /*
    void setMouseCallback(const String & winname, MouseCallback onMouse,
        void* userdata = 0);

    • winname

        마우스 이벤트 처리를 할 창의 이름

    • onMouse

        마우스 이벤트 처리를 위한 콜백 함수 이름

    • userdata

        콜백 함수에 전달할 사용자 데이터의 포인터
    */
   
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    if (img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");
    setMouseCallback("img", on_mouse);

    imshow("img", img);
    waitKey(0);
}

void on_mouse(int event, int x, int y, int flags, void*)
{
    switch (event) 
    {
    case EVENT_LBUTTONDOWN:
        ptOld = Point(x, y);
        cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
        break;

    case EVENT_LBUTTONUP:
        cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
        break;

    case EVENT_MOUSEMOVE:
        if (flags & EVENT_FLAG_LBUTTON) 
        {
            line(img, ptOld, Point(x, y), Scalar(0, 255, 255), 2);
            imshow("img", img);
            ptOld = Point(x, y);
        }
        
        break;

    default:
        break;
    }
}
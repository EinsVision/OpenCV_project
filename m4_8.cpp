#include "OpenCV.h"

void Projects_4::m4_8()
{
    // 4.8 키보드 이벤트 처리 함수
    // waitKey() 함수의 인자를 지정하지 않거나
    // 0 또는 음수로 설정하면 키 입력이 있을 때까지 
    // 무한히 기다리고, 사용자가 키보드를 누르면 
    // 눌린 키의 아스키 코드를 반환하면서 함수가 종료합니다.
    Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    namedWindow("img");
    imshow("img", img);

    while (true) 
    { // 27은 esc의 아스키 코드 값입니다.  
      // 참고로 키보드에서 Enter 키의 아스키 코드는 13이고, 
      // Backspace 키는 8, 
      // Tab 키는 9입니다.
        if (waitKey() == 27 || waitKey() == 13 || waitKey() == 8)
        {
            break;
        }
    }
}

#include "OpenCV.h"

void Projects_2::m2_2()
{
    // 2.2 영상을 화면에 출력하기
    cv::Mat img;
    std::string imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    img = cv::imread(imgPath);

    if (img.empty())
    {
        // 이미지가 존재하지 않거나 혹은 
        // 이미지가 손상되어 제대로 불러오지 못한 경우
        // Mat 클래스의 멤버 함수 Mat::empty()는 true를 반환합니다.
        std::cerr << "Image load failed" << std::endl;
        return;
    }

    // imwrite
    vector<int> params;
    params.push_back(IMWRITE_JPEG_QUALITY);
    params.push_back(55); // 압축률
    imwrite("compressed_beautiful.jpg", img, params);

    cv::namedWindow("Input Image");
    cv::imshow("Input Image", img);

    cv::waitKey(); /*사용자의 키보드 입력을 기다리는 함수*/
}
/*
Mat imread(const String& filename, int flags = IMREAD_COLOR);

    • filename

    불러올 영상 파일 이름

    • flags

    영상 파일 불러오기 옵션 플래그.ImreadModes 열거형 상수를 지정합니다.

    • 반환값

    불러온 영상 데이터(Mat 객체)

*/

/*
bool imwrite(const String& filename, InputArray img,
    const std::vector<int>& params = std::vector<int>());

    • filename

    저장할 영상 파일 이름

    • img

    저장할 영상 데이터(Mat 객체)

    • params

    저장할 영상 파일 형식에 의존적인 파라미터(플래그& 값) 쌍

    (paramId_1, paramValue_1, paramId_2, paramValue_2, ... .)

    • 반환값

    정상적으로 저장하면 true, 실패하면 false를 반환합니다.
*/


/*
bool Mat::empty() const

    • 반환

    행렬의 rows 또는 cols 멤버 변수가 0이거나, 
    또는 data 멤버 변수가 NULL이면 true를 반환합니다.
*/

/*
void namedWindow(const String& winname, int flags = WINDOW_AUTOSIZE);
    
    • winname

    영상 출력 창 상단에 출력되는 창 고유 이름.이 문자열로 창을 구분합니다.

    • flags

    생성되는 창의 속성을 지정하는 플래그.
    WindowFlags 열거형 상수를 지정합니다.

*/

/*
    void destroyWindow(const String& winname);
    하나의 창을 닫을 때 사용

    void destroyAllWindows();
    열려 있는 모든 창을 닫을 때 사용
*/

/*
void imshow(const String& winname, InputArray mat);

    • winname

    영상을 출력할 대상 창 이름

    • mat

    출력할 영상 데이터(Mat 객체)
*/
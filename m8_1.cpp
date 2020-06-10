#include "OpenCV.h"

void Projects_8::m8_1()
{
    // 8.1 어파인 변환 warpAffine
    String imgPath("D:\\source\\OpenCV_project\\image\\beautiful.jpg");
    Mat img;
    Mat gray_img;
    Mat dst;
    img = imread(imgPath);
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    if (gray_img.empty())
    {
        cerr << "Image is empty" << endl;
        return;
    }

    namedWindow("img");

    Point2f srcPts[3], dstPts[3];
    srcPts[0] = Point2f(0, 0);
    cout << "srcPts[0]: "<<srcPts[0] << endl;

    srcPts[1] = Point2f(gray_img.cols - 1, 0);
    cout << "srcPts[1]: " << srcPts[1] << endl;

    srcPts[2] = Point2f(gray_img.cols - 1, gray_img.rows - 1);
    cout << "srcPts[2]: " << srcPts[2] << endl;

    dstPts[0] = Point2f(50, 50);
    cout << "dstPts[0]: " << dstPts[0] << endl;

    dstPts[1] = Point2f(gray_img.cols - 100, 100);
    cout << "dstPts[1]: " << dstPts[1] << endl;

    dstPts[2] = Point2f(gray_img.cols - 50, gray_img.rows - 50);
    cout << "dstPts[2]: " << dstPts[2] << endl;

    Mat M = getAffineTransform(srcPts, dstPts);
    /*for (int j = 0; j < M.rows; j++)
    {
        for (int i = 0; i < M.cols; i++)
        {
            cout << static_cast<int>(M.at<uchar>(j, i)) << " ";
        }
        cout << endl;
    }*/
    // getAffineTransform 함수를 사용하면 
    // 대응하는 3점 쌍에 대한 변환 행렬을 구할 수 있습니다.

    warpAffine(gray_img, dst, M, Size());
    // 변환을 실행합니다.

    imshow("M", M);
    imshow("img", dst);
    // imwrite("M.jpg", M);
    if (waitKey(0) == 27)
    {
        return;
    }
}
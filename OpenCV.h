#pragma once
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

class Variables
{

private:
    int     channel;
    double  height;
    double  width;

public:
    void set_Image(int channel, double height, double width);
    void show_Image();
}; 

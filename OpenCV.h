#pragma once
#include <iostream>
#include "opencv2/opencv.hpp"

// Image Ŭ���� ����

class Image {

private:
    int channel;
    double height;
    double width;

public:
    void set_Image(int channel, double height, double width);
    void show_Image();
}; 

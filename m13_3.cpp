#include "OpenCV.h"

void Projects_13::m13_3()
{
	// 13.3 HOG 알고리즘과 보행자 검출 Histograms of Oriented Gradients
	String VideoPath("D:\\source\\OpenCV_project\\image\\vtest.avi");
	VideoCapture cap(VideoPath);

	if (!cap.isOpened()) 
	{
		cerr << "Video open failed!" << endl;
		return;
	}

	HOGDescriptor hog;
	hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());

	Mat frame;
	while (true) 
	{
		cap >> frame;
		if (frame.empty())
			break;

		vector<Rect> detected;
		hog.detectMultiScale(frame, detected);

		for (Rect r : detected)
		{
			Scalar c = Scalar(rand() % 256, rand() % 256, rand() % 256);
			rectangle(frame, r, c, 3);
		}

		imshow("frame", frame);

		if (waitKey(10) == 27)
			break;
	}

	waitKey();
}

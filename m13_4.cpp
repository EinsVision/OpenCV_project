#include "OpenCV.h"

void Projects_13::m13_4()
{
	// 13.4 QR 코드 검출 
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		cerr << "Camera open failed!" << endl;
		return;
	}

	QRCodeDetector detector;

	Mat frame;
	while (true)
	{
		cap >> frame;

		if (frame.empty()) 
		{
			cerr << "Frame load failed!" << endl;
			break;
		}

		vector<Point> points;
		String info = detector.detectAndDecode(frame, points);

		if (!info.empty())
		{
			polylines(frame, points, true, Scalar(0, 0, 255), 2);
			putText(frame, info, Point(10, 30), FONT_HERSHEY_DUPLEX, 1, Scalar(0, 0, 255));
		}

		imshow("frame", frame);
		if (waitKey(1) == 27)
		{
			return;
		}
			
	}
}

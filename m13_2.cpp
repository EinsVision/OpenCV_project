#include "OpenCV.h"

void Projects_13::m13_2()
{
	// 13.2 캐스케이드 분류기와 얼굴 검출 cascade classifier and face detection

	String imgPath("D:\\source\\OpenCV_project\\image\\kids.png");
	String face_cas("D:\\opencv_src\\build\\etc\\haarcascades\\haarcascade_frontalface_default.xml");
	String eyes_cas("D:\\opencv_src\\build\\etc\\haarcascades\\haarcascade_eye.xml"); 
	Mat img;
	img = imread(imgPath);

	if (img.empty())
	{
		cerr << "Image is empty" << endl;
		return;
	}

	CascadeClassifier classifier;
	CascadeClassifier classifier_eyes;

	classifier.load(face_cas);
	classifier_eyes.load(eyes_cas);

	if (classifier.empty()|| classifier_eyes.empty())
	{
		cerr << "xml is empty" << endl;
		return;
	}
	vector<Rect> faces;
	classifier.detectMultiScale(img, faces);
	for (Rect face : faces)
	{
		rectangle(img, face, Scalar(255, 0, 255), 2);

		Mat faceROI = img(face);
		vector<Rect> eyes;
		classifier_eyes.detectMultiScale(faceROI, eyes);

		for (Rect eye : eyes)
		{
			Point center(eye.x + eye.width / 2, eye.y + eye.height / 2);
			circle(faceROI, center, eye.width / 2, Scalar(255, 0, 0), 2, LINE_AA);
		}
	}

	imshow("img", img);

	waitKey();
}

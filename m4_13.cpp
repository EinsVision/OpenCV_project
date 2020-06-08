#include "OpenCV.h"

void my_func();

void Projects_4::m4_13()
{
	// 4.13 연산시간 측정
	if (false)
	{
		int64 t1 = getTickCount();

		my_func(); // do something

		int64 t2 = getTickCount();
		double ms = (t2 - t1) * 1000 / getTickFrequency();
		cout << ms << endl;
	}
	else
	{
		TickMeter tm;
		tm.start();

		my_func(); // do something

		tm.stop();
		double ms = tm.getTimeMilli();
		cout << ms << endl;
	}
}

void my_func()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "Named windows " << i << endl;
	}
	
}
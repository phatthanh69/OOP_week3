#pragma once
#include <iostream>
#include <time.h>
#include <math.h>
class Time
{
private:
	int hour, minute, second;
public:
	Time(int h = 0, int m = 0, int s = 0);
	~Time();
	void SetTime(int h, int m, int s);
	int GetHour();
	int GetMinute();
	int GetSecond();
	void PreviousSecond();
	void NextSecond();
};


#include "Time.h"

Time::Time(int h, int m, int s)
{
	h = hour;
	m = minute;
	s = second;
}

Time::~Time()
{
}

void Time::SetTime(int h, int m, int s)
{
	while (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60) {
		h = hour;
		m = minute;
		s = second;
	}
}

int Time::GetHour()
{
	return hour;
}

int Time::GetMinute()
{
	return minute;
}

int Time::GetSecond()
{
	return second;
}

void Time::PreviousSecond()
{
	if (hour == 0 && minute == 0 && second == 0) {
		hour = 23;
		minute = 59;
		second = 59;
	}if (minute == 0 && second == 0) {
		hour--;
		minute = 59;
		second = 59;
	} if (second = 0) {
		minute--;
		second = 59;
	}
	second--;
}

void Time::NextSecond()
{
	if (hour == 23 && minute == 59 && second == 59) {
		hour = 0;
		minute = 0;
		second = 0;
	}
	if (minute == 59 && second == 59) {
		hour++;
		minute = 0;
		second = 0;
	}
	if (second == 59) {
		minute++;
		second = 0;
	}
	second++;
}

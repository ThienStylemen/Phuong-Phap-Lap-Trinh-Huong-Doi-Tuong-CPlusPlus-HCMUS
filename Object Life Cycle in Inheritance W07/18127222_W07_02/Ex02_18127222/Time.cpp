#include "Time.h"


Time::Time(){
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	this->_hour = local.tm_hour;
	this->_minute = local.tm_min;
	this->_second = local.tm_sec;
}
Time::Time(int hour, int  minute, int second) {
	this->_hour = hour;
	this->_minute = minute;
	this->_second = second;
}

Time::~Time()
{
}

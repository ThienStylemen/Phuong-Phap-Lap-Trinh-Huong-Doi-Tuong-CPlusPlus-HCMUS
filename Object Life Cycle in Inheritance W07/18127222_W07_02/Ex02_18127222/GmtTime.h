#pragma once
#include"Time.h"
class GmtTime:public Time{

public:
	string ToString(int number);
	GmtTime() :Time() {
		
	}
	GmtTime(int hour, int minute, int second) : Time(hour, minute, second) {
		this->_hour = hour;
		this->_minute = minute;
		this->_second = second;
	}
	~GmtTime();
};


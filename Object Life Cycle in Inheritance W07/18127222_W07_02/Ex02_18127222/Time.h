#pragma once
#include<iostream>
#include<time.h>
#include<sstream>
#include<string>
using namespace std;
class Time{
protected:
	unsigned int _hour;
	unsigned int _minute;
	unsigned int _second;
public:
	void display() {
		cout << this->_hour << ":" << this->_minute << ":" << this->_second << endl;
	}
	Time(int hour, int  minute, int second);
	Time();
	~Time();
};

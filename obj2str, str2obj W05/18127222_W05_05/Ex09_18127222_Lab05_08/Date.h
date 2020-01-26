#pragma once
#include<time.h>
#include<iostream>
#include<vector>
#include <sstream>
#include<string>
#include"Tokenizer.h"
using namespace std;
class Date{
	int m_day;
	int m_month;
	int m_year;
public:
	string ToString();
	bool is_Valid_Date();
	Date();
	Date(int day, int month, int year);
	~Date();
	bool is_Leap_year(int year);
	static Date* Parse(string s);
};


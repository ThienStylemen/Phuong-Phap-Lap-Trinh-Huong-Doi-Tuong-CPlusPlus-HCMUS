#pragma once
#include<iostream>
using namespace std;
class Date{
private:
	int m_day;
	int m_month;
	int m_year;
public:
	Date operator+=(int x);
	Date operator-=(int x);
	operator long();
	operator int();
	Date operator+(int x);
	Date operator-(int x);

	Date& operator++(int x);
	Date operator++();
	Date& operator--(int x);
	Date operator--();

	bool operator==(const Date& a);
	bool operator!=(const Date& a);
	bool operator>=(const Date& a);
	bool operator<=(const Date& a);
	bool operator>(const Date& a);
	bool operator<(const Date& a);
	friend ostream& operator<<(ostream& os, const Date& d);
	friend istream& operator>>(istream& is, Date d);
	Date Yesterday();
	Date Tomorrow();
	Date operator=(const Date& a);
	Date(int year);
	Date(int year,int month);
	Date(int year,int month,int day);
	Date(const Date& a);
	Date();
	~Date();
};

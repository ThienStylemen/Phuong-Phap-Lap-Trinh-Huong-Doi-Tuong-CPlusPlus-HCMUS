#include "Date.h"

Date::Date(){
	this->m_day = 1;
	this->m_month = 1;
	this->m_year = 1990;
}

Date::~Date(){
}
Date Date::operator=(const Date& a) {
	this->m_day = a.m_day;
	this->m_month = a.m_month;
	this->m_year = a.m_year;
	return *this;
}
Date::Date(int year) {
	this->m_day = 1;
	this->m_month = 1;
	this->m_year = year;
}
Date::Date(int year, int month) {
	this->m_day = 1;
	this->m_month = month;
	this->m_year = year;
}
Date::Date(int year, int month, int day) {
	this->m_day = day;
	this->m_month = month;
	this->m_year = year;
}
Date::Date(const Date& a) {
	this->m_day = a.m_day;
	this->m_month = a.m_month;
	this->m_year = a.m_year;
}
Date Date::Tomorrow() {
	if (this->m_day =31 ) {
		if (this->m_month == 1 || this->m_month == 3 || this->m_month == 5 || this->m_month == 7 || this->m_month == 8 || this->m_month == 10) {
			this->m_day = 1;
			this->m_month++;
		}
		else if (this->m_month == 12) {
			this->m_year++;
			this->m_month = 1;
			this->m_day = 1;
		}
	}
	if (this->m_day = 30) {
		if ( this->m_month == 4 || this->m_month == 6 || this->m_month == 9 || this->m_month == 11 ) {
			this->m_day = 1;
			this->m_month++;
		}
	}
	if (this->m_day == 28 && this->m_month == 2) {
		this->m_month++;
		this->m_day = 1;
	}
	return *this;
}

Date Date::Yesterday() {
	if (this->m_day = 1) {
		if ( this->m_month == 2 || this->m_month == 4 || this->m_month == 6 || this->m_month == 9|| this->m_month == 8 || this->m_month == 11) {
			this->m_day = 31;
			this->m_month--;
		}
		else if (this->m_month == 3 || this->m_month == 5 || this->m_month == 7 || this->m_month == 10 || this->m_month == 10) {
			this->m_day = 30;
		}
	}
	return *this;
}
ostream& operator<<(ostream& os, const Date& d) {
	os << d.m_year << ":" << d.m_month << ":" << d.m_day;
	return os;
}
istream& operator>>(istream& is, Date d) {
	is >> d.m_year >> d.m_month >> d.m_day;
	return is;
}
bool Date::operator==(const Date& a) {
	if (this->m_day = a.m_day && this->m_year == a.m_year && this->m_month == a.m_month)
		return true;
	return false;
}
bool Date::operator!=(const Date& a) {
	if (this->m_day != a.m_day && this->m_year != a.m_year && this->m_month != a.m_month)
		return true;
	return false;
}
bool Date::operator>=(const Date& a) {
	if (this->m_day >= a.m_day && this->m_year >= a.m_year && this->m_month >= a.m_month)
		return true;
	return false;
}
bool Date::operator<=(const Date& a) {
	if (this->m_day <= a.m_day && this->m_year <= a.m_year || this->m_month <= a.m_month)
		return true;
	return false;
}
bool Date::operator>(const Date& a) {
	if (this->m_day > a.m_day && this->m_year > a.m_year && this->m_month > a.m_month)
		return true;
	return false;
}
Date Date::operator+(int x) {
	this->m_day += x;
	return *this;
}
Date Date::operator-(int x) {
	this->m_day -= x;
	return*this;
}
Date& Date::operator++(int x) {
	Date temp = *this;
	temp.m_month = this->m_month;
	temp.m_year = this->m_year;
	temp.m_day++;
	return temp;
}
Date Date::operator++() {
	this->m_day = this->m_day + 1;
	return *this;
}
Date& Date::operator--(int x) {
	Date temp = *this;
	temp.m_day++;
	temp.m_month = this->m_month;
	temp.m_year = this->m_year;
	return temp;
}
Date Date::operator--() {
	this->m_day = this->m_day - 1;
	return *this;
}
bool Date::operator<(const Date& a) {
	if (this->m_day < a.m_day && this->m_year < a.m_year && this->m_month < a.m_month)
		return true;
	return false;
}
Date::operator int() {
	this->m_day = 1;
	return *this;
}
Date::operator long() {
	this->m_day = 1;
	this->m_month = 1;
	this->m_year = 1;
	return *this;
}
Date Date::operator+=(int x) {
	this->m_day = this->m_day + x;
	return *this;
}
Date Date::operator-=(int x) {
	this->m_day = this->m_day - x;
	return *this;
}
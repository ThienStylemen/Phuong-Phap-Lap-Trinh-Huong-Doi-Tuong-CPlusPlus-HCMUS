#include "Date.h"

Date::Date() {
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	this->m_day = local.tm_mday;
	this->m_month = local.tm_mon;
	this->m_year = local.tm_year + 1900;
}

string Date::ToString() {
	stringstream writer;
	writer << this->m_day << ":" << this->m_month << ":" << this->m_year;
	return writer.str();
}
Date::~Date() {

}
Date::Date(int day, int month, int year) {
	this->m_day = day;
	this->m_month = month;
	this->m_year = year;
}
bool Date::is_Leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year / 100 == 0)
		return true;
	return false;
}
Date* Date::Parse(string s) {
	string seperator = ":";
	vector<string> v = Tokenizer::Parse(s, seperator);
	int day = stoi(v[0]);
	int month = stoi(v[1]);
	int year = stoi(v[2]);
	Date *ans = new Date(day, month, year);
	return ans;
}
bool Date::is_Valid_Date() {
	if (is_Leap_year(this->m_year)) {
		if (this->m_month == 2) {
			if (this->m_day >= 0 && this->m_day <= 29) {
				return true;
			}
		}
		else if (this->m_month == 1 && this->m_month == 3 && this->m_month == 5 && this->m_month == 7 && this->m_month == 8 && this->m_month == 10 && this->m_month == 12) {
			if (this->m_day >= 0 && this->m_day <= 31) {
				return true;
			}
		}
		else {
			if (this->m_day >= 0 && this->m_day <= 30) {
				return true;
			}
		}
	}
	else {
		if (this->m_month == 2) {
			if (this->m_day >= 0 && this->m_day <= 28) {
				return true;
			}
		}
		else if (this->m_month == 1 && this->m_month == 3 && this->m_month == 5 && this->m_month == 7 && this->m_month == 8 && this->m_month == 10 && this->m_month == 12) {
			if (this->m_day >= 0 && this->m_day <= 31) {
				return true;
			}
		}
		else {
			if (this->m_day >= 0 && this->m_day <= 30) {
				return true;
			}
		}
	}
	return false;
}
void Date::inputDate() {
	cin >> this->m_day >> this->m_month >> this->m_year;
}
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
	string id;
	string name;
	int salary;
	const int unit_salary = 300;	// he so luong
	const int essential_salary = 500;
	int days_off = 0;
	int day_off_money = 50;

public:
	void setInformation(string id, string name, int day_off);
	void InputInformation();
	void OutputInformation();
	int calSalary();
	Teacher(string id, string name, int day_off);
	Teacher();
	~Teacher();
};


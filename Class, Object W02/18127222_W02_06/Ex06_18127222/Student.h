#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
	string _firstName;
	string _middleName;
	string _familyName;
public:
	void display();
	void setInfor(string first, string middle, string family);
	string getFirst();
	Student(string first,string middle,string family);
	Student();
	~Student();
};


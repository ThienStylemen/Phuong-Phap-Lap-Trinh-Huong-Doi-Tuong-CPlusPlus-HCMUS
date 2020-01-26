#pragma once
#include <iostream>
#include<string>
using namespace std;

class Student
{
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	void display();
public:
	Student();
	Student(string firstName,string middleName,string lastName);
	~Student();
};

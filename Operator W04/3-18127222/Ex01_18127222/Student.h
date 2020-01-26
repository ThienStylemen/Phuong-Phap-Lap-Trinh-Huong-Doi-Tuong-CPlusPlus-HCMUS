#pragma once
#include <iostream>
#include <string>

using namespace std;
class Student{
private:
	string name;
	float math, literature;
public:
	void display();
	Student();
	Student(string name, float , float );
	Student(string name);
	Student(const Student& student);
	~Student();
};

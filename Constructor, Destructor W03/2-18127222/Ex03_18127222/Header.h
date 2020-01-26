#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Student {
private:
	string name;
	int litenaturePoints;
	int mathPoints;
public:
	void input();
	void output();
	string getName();
	int getLiteraturePoint();
	int getMathPoints();
	void setName(string name);
	void setLiteraturePoint(int mark);
	void setMathPoint(int mark);
	float calculateGPA();
	string getGrade();
};

#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int _nu, _de;
public:
	void setFraction(int nu, int de);
	void display();
	int getNu();
	int getDe();

	Fraction();
	~Fraction();
};

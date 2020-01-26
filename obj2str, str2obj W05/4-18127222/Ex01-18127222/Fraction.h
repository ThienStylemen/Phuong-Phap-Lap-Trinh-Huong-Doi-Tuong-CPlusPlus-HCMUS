#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int num, den;
public:
	Fraction operator+(const Fraction &a);
	Fraction operator-(const Fraction &a);
	Fraction& operator++();
	Fraction& operator++(int x);
	Fraction& operator--();
	operator int();
	operator float();
	bool operator<(Fraction a);
	bool operator>(Fraction a);
	bool operator==(Fraction a);
	bool operator>=(Fraction a);
	bool operator<=(Fraction a);
	bool operator!=(Fraction a);
	
	friend ostream& operator<<(ostream &os, const Fraction &p);
	friend istream& operator>>(istream &is, Fraction &p);
	Fraction();
	Fraction(int num, int den);
	~Fraction();
};

#pragma once
#include <iostream>
using namespace std;
class Monomial{
private:
	int a;
	int n;
public:
	friend istream& operator>>(istream &is, Monomial &m);
	friend ostream& operator<<(ostream &os, const Monomial& m);
	Monomial& operator++();
	Monomial operator++(int x);
	Monomial& operator--();
	Monomial operator--(int x);
	Monomial operator!();
	Monomial operator+(const Monomial& a);
	Monomial operator=(const Monomial& a);
	Monomial operator+=(const Monomial& a);
	Monomial operator*=(const Monomial& a);
	bool operator<(Monomial a);
	bool operator>(Monomial a);
	bool operator==(Monomial a);
	bool operator>=(Monomial a);
	bool operator<=(Monomial a);
	bool operator!=(Monomial a);
	Monomial();
	Monomial(int a, int n);
	~Monomial();
};


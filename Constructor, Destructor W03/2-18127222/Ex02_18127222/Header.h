#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Monomial {	//A*x^N
private:
	int A;
	int N;
public:
	void input();
	void output();
	int getCoefficient();
	int getExponent();
	void setCoefficient(int coefficient);
	void setExponent(int exponent);
	int calculateValue(int x);
	Monomial calculateDerive();
	Monomial addWithSameComponent(Monomial a);
	Monomial mulToAnotherMonomial(Monomial a);
	int compareWithAnotherMonomial(Monomial a, int x);
};
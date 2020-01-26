#pragma once
#include <iostream>
using namespace std;
struct Fraction {
	int nu, de;
};

void reduceAFraction(Fraction &a);
Fraction reverseAfraction(Fraction &a);

Fraction addTwoFraction(Fraction a, Fraction b);
Fraction multiplyTwoFraction(Fraction a, Fraction b);
float compareTwoFraction(Fraction a, Fraction b);
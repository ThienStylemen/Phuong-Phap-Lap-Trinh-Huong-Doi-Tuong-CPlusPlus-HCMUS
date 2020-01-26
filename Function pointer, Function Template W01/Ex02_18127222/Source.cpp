#include "Header.h"

void reduceAFraction(Fraction &a) {
	int i;
	for (i = a.nu; i >0; i--) {
		if (a.nu%i == 0 && a.de % i == 0) {
			a.nu = a.nu / i;
			a.de = a.de / i;
		}
	}
}

Fraction reverseAfraction(Fraction &a) {
	Fraction temp;
	temp.nu = a.de;
	temp.de = a.nu;
	return temp;
}

Fraction addTwoFraction(Fraction a, Fraction b) {
	Fraction temp;
	temp.nu = a.nu*b.de + b.nu*a.de;
	temp.de = a.de* b.de;
	reduceAFraction(temp);
	return temp;
}

Fraction multiplyTwoFraction(Fraction a, Fraction b) {
	Fraction temp;
	temp.nu = a.nu*b.nu;
	temp.de = a.de*b.de;
	reduceAFraction(temp);
	return temp;
}

float compareTwoFraction(Fraction a, Fraction b) {
	float x = (float)(1.0*a.nu*b.de - 1.0*b.nu*a.de) / (float)(1.0*a.de*b.de);
	if (x < 0) return -1;	// a<b
	else if (x > 0) return 1;	// a>b;
	else return 0;	// a==b
}

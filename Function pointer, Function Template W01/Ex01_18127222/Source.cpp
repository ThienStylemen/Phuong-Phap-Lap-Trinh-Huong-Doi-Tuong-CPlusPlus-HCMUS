#include "Header.h"
void displayPoly(Poly f) {
	for (int i = 0; i < f.n+1; i++) {
		cout << f.a[i] << "*x^" << i << " ";
	}
}

void AdditionOfTwoPoly(Poly f, Poly g, Poly &temp ) {
	int MaxElement = 0, minElement = 0;
	if (f.n > g.n) {
		MaxElement = f.n;
		minElement = g.n;
	}
	else {
		MaxElement = g.n;
		minElement = f.n;
	}
	for (int i = 0; i <= minElement ; i++) {
		temp.a[i] = f.a[i] + g.a[i];
	}
	if (f.n > g.n) {
		for (int i = minElement + 1; i <= MaxElement; i++) {
			temp.a[i] = f.a[i];
		}
	}
	else {
		for (int i = minElement + 1; i <= MaxElement; i++) {
			temp.a[i] = g.a[i];
		}
	}
}
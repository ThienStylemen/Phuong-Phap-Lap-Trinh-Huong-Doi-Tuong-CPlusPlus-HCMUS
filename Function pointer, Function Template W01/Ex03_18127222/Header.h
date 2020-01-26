#pragma once
#include <iostream>
using namespace std;

struct Fraction {
	int nu, de;
};
void inputArray(Fraction a[], int n);
void outputArray(Fraction a[], int n);
void sort(Fraction *a, int n, bool(*compare)(Fraction, Fraction));
bool compare2FractionsToSortAsc(Fraction a, Fraction b);
bool compare2FractionsToSortDesc(Fraction a, Fraction b);
bool compare2FractionsToSortPostiveDesc(Fraction a, Fraction b);

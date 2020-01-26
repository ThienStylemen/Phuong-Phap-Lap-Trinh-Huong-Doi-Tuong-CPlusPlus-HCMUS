#pragma once
#include <iostream>
using namespace std;
struct Poly
{
	int n;	// may be changed during computation
	int *a;	// should be allocated dynamically
};
void displayPoly(Poly f);
void AdditionOfTwoPoly(Poly f, Poly g, Poly &temp);

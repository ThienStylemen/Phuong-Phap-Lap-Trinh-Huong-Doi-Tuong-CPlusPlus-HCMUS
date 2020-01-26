#include <iostream>
using namespace std;

struct Fraction {
	int nu, de;
};

template <class T>
void inputAnyType(T a[], int n, void(*ChooseType)(T[], int));
void inputArrayOfFraction(Fraction a[], int n);

template<class T>
void outputArray(T a[], int n, void(*choseTypeToOutPutArray)(T[], int));

void outputArrayOfFraction(Fraction a[], int n);
void sort(Fraction *a, int n, bool(*compare)(Fraction, Fraction));
bool compare2FractionsToSortAsc(Fraction a, Fraction b);
bool compare2FractionsToSortDesc(Fraction a, Fraction b);
bool compare2FractionsToSortPostiveDesc(Fraction a, Fraction b);


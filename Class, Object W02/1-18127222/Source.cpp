#include "Header.h"
int compare2Fraction(Fraction a, Fraction b) {
	float x = (float)(a.nu / a.de) - (float)(1.0* b.nu / b.de);
	if (x > 0) return 1;
	else if (x == 0.0) return 0;
	else return -1;
}


void sortAsc(Fraction *a, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (compare2Fraction(a[i], a[j]) == 1) {	// a[i] > a[j];
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void sortDesc(Fraction a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (compare2Fraction(a[i], a[j]) == -1) {	// a[i] < a[j];
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void inputArray(Fraction a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i].nu >> a[i].de;
		cout << endl;
	}
}

void outputArray(Fraction a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].nu << "\t" << a[i].de;
		cout << endl;
	}
}

void sort(Fraction *a, int n, bool (*compare)(Fraction, Fraction)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ( compare(a[i], a[j]) ) {
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

bool compare2FractionsToSortAsc(Fraction a, Fraction b) {
	float x = (float)(a.nu / a.de) - (float)(1.0* b.nu / b.de);
	if ( x >0) 	return true;
	else return false;
}
bool compare2FractionsToSortDesc(Fraction a, Fraction b) {
	float x = (float)(a.nu / a.de) - (float)(1.0* b.nu / b.de);
	if (x < 0) 	return true;
}
bool compare2FractionsToSortPostiveDesc(Fraction a, Fraction b) {
	if ((float)(a.nu / a.de) >= 0 || (float)(1.0* b.nu / b.de)) {
		float x = (float)(a.nu / a.de) - (float)(1.0* b.nu / b.de);
		if (x == 0.0) 	return true;
	}
	else return false;
}


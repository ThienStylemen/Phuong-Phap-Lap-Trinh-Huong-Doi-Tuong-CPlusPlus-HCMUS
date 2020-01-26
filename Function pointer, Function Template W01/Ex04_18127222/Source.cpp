#include "Header.h"
template <class T>
void inputAnyType(T a[], int n, void(*ChooseType)(T[], int)) {
	ChooseType(a, n);
}

void inputArrayOfFraction(Fraction a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i].nu >> a[i].de;
		cout << endl;
	}
}

template<class T>
void outputArray(T a[], int n, void(*choseTypeToOutPutArray)(T[], int)) {
	choseTypeToOutPutArray(a, n);
}

void outputArrayOfFraction(Fraction a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].nu << "\t" << a[i].de;
		cout << endl;
	}
}

void sort(Fraction *a, int n, bool(*compare)(Fraction, Fraction)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (compare(a[i], a[j])) {
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

bool compare2FractionsToSortAsc(Fraction a, Fraction b) {
	float x = (float)(a.nu / a.de) - (float)(1.0* b.nu / b.de);
	if (x > 0) 	return true;
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
int main() {
	int n;
	cout << "How many elements do you want to input ???";
	cin >> n;
	Fraction *f = new Fraction[n];

	inputAnyType(f, n, inputArrayOfFraction);
	sort(f, n, compare2FractionsToSortAsc);
	outputArray(f, n, outputArrayOfFraction);

	cout << endl;
	sort(f, n, compare2FractionsToSortDesc);
	outputArray(f, n, outputArrayOfFraction);

	cout << endl;
	sort(f, n, compare2FractionsToSortPostiveDesc);
	outputArray(f, n, outputArrayOfFraction);

	delete[] f;
	system("pause");
	return 0;
}
#include "Header.h"
int main() {
	int n = 3;
	Fraction *a = new Fraction[n];

	inputArray(a, n);
	sort(a, n, compare2FractionsToSortAsc);
	outputArray(a, n);

	cout << endl;
	sort(a, n, compare2FractionsToSortDesc);
	outputArray(a, n);

	cout << endl;
	sort(a, n, compare2FractionsToSortPostiveDesc);
	outputArray(a, n);

	delete[] a;
	system("pause");
	return 0;
}
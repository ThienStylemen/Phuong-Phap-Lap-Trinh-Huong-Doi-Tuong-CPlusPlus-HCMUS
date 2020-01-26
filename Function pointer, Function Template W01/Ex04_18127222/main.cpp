#include "Header.h"
int main() {
	Poly f;
	cout << "n is the elements, please input n = ";
	cin >> f.n;

	f.a = new int[f.n + 1];

	// try to input A Poly
	for (int i = 0; i <= f.n; i++) {
		cin >> f.a[i];
	}
	displayPoly(f);
	cout << endl;
	Poly g;
	cout << "n is the elements, please input n = ";
	cin >> g.n;
	g.a = new int[g.n + 1];
	for (int i = 0; i <= g.n; i++) {
		cin >> g.a[i];
	}
	displayPoly(g);

	int MaxElement = 0, minElement = 0;
	if (f.n > g.n) {
		MaxElement = f.n;
		minElement = g.n;
	}
	else {
		MaxElement = g.n;
		minElement = f.n;
	}

	Poly h;
	h.a = new int[MaxElement + 1];
	f.n > g.n ? h.n = f.n : h.n = g.n;
	cout << endl << "this is the result: " << endl;

	AdditionOfTwoPoly(f, g, h);
	displayPoly(h);

	delete[] g.a;
	delete[] f.a;
	system("pause");
	return 0;
}
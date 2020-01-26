#include"Fraction.h"

int main() {
	Fraction a(3, 4), b(4, 4);
	++a;
	cout << a << endl;
	cout << (float)a << endl;
	a++;
	cout << a << endl;

	cout << (int)a << endl;

	Fraction c = a + b;
	cout << c << endl;
	Fraction f = b - a;
	cout << f << endl;

	cout << "pls input a fraction:";
	Fraction fractionIn;
	cin >> fractionIn;
	cout << "you inputed: " << fractionIn << endl;

	Fraction g(4, 5);
	Fraction k(5, 5);
	Fraction l(4, 5);

	if (g < k) cout << "g<k" << endl; else cout << "g>k" << endl;
	if (k > g) cout << "k>g" << endl; else cout << "k<g" << endl;
	if (l == g) cout << "l==g" << endl; else cout << "l!=g" << endl;
	if (k >= g) cout << "k>=g" << endl; else cout << "k<g" << endl;
	if (l <= k) cout << "l<=k" << endl; else cout << "l>k" << endl;
	if (l != k) cout << "l!=k" << endl; else cout << "l==k" << endl;

	system("pause");
	return 0;
}
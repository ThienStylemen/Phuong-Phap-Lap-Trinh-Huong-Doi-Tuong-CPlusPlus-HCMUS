#include"Fraction.h"

int main() {
	Fraction f1, f2;					// 0/1
	Fraction f3(1, -7);				// -1/7
	Fraction f4(f3);				// Copy constructor
	Fraction f5 = f2;					// Copy constructor
	Fraction f6, f7, f8;					// Default constructor
	f6 = f3;

	f7 = f1 + f5;
	f8 = f2 - f4;
	f3 = f1 * f7;
	f5 = f6 / f2;

	if (f2 == f3) cout << "f2==f3";
	if (f3 != f1) cout << "f3!=f1";
	if (f2 >= f5) cout << "f2>=f5";
	if (f2 > f5) cout << "f2>f5";
	if (f5 <= f3) cout << "f5<=f3";
	if (f5 < f3) cout << "f5<f3";

	f1 = f2 + 3;
	//f3 = -7 + f1;
	f3 = f1-7;
	//f5 = 7 * f3;
	f5 = f3 * 7;
	f6 = f4 - 6;

	cout << f3;
	cout << f6;

	f1 += f5;
	f6 -= f7;
	f8 *= f1;
	f8 /= f2;

	cout << f8++;
	cout << ++f7;

	cout << f8--;
	cout << --f7;

	float f = (float)f3;

	
	cout << "------------------------------------";
	
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
	cout << "---------------------" << endl;
	Fraction m(3, 4);
	Fraction n(3, 4);
	Fraction p(4, 4);

	cout << ++m + p << "\t" << m << endl;
	cout << n++ + p << "\t" << n << endl;
	cout << "-------" << endl;
	p = n;
	
	system("pause");
	return 0;
}
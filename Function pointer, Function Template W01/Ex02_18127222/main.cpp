#include "Header.h"

int main() {
	cout << " input a fraction";
	Fraction a;
	cin >> a.nu >> a.de;
	cout << "reduce a fraction\t";
	reduceAFraction(a);
	cout << a.nu << "\t" << a.de;


	cout << "\n";
	cout << "reverse a fraction\t";
	Fraction b;
	b = reverseAfraction(a);
	cout << b.nu << "\t" << b.de;

	cout << "\n";
	cout << "add two fraction\t";
	Fraction c;
	c = addTwoFraction(a, b);
	cout << c.nu << "\t" << c.de;

	cout << "\n";
	cout << "multiply two fraction\t";
	Fraction d;
	d = multiplyTwoFraction(a, b);
	cout << d.nu << "\t" << d.de;

	int x = compareTwoFraction(a, b);
	if (x < 0) cout << "a<b";
	else if (x > 0) cout << "a>b";
	else cout << "a==b";

	system("pause");
	return 0;
}
#include"Fraction.h"
int main() {
	Fraction* a = new Fraction(3,4);
	cout << a->ToString() << endl;

	Fraction *b = Fraction::parse(a->ToString());
	cout << b->ToString();
	delete a,b;
	system("pause");
	return 0;
}
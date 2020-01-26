#include"Header.h"
int main() {
	Monomial a;

	a.input();
	a.output();
	int coefficient = a.getCoefficient();
	cout << endl << coefficient << endl;
	int exponent = a.getExponent();
	cout << exponent << endl;

	int result = a.calculateValue(5);
	cout << result << endl;

	cout << "this is Derive: ";
	Monomial resultderive = a.calculateDerive();
	resultderive.output();
	cout << endl;

	Monomial b;
	b.setCoefficient(7);
	b.setExponent(2);

	cout << "add method" << endl;
	Monomial resultadd = a.addWithSameComponent(b);
	resultadd.output();

	cout << endl << "multiply: ";
	Monomial resultMultiply = a.mulToAnotherMonomial(b);
	resultMultiply.output();

	cout << endl << "compare" << endl;
	int x = a.compareWithAnotherMonomial(b, 2);
	if (x == 1) cout << "a>b";
	else if (x == -1) cout << "a<b";
	else cout << "a == b";
	system("pause");
	return 0;
}
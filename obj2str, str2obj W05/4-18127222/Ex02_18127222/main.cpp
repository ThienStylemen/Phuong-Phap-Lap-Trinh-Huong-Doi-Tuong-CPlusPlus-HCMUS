#include"Monomial.h"
int main() {
	Monomial a(3, 4);
	Monomial b(4, 4);
	Monomial c = a +b;
	cout << c;
	Monomial d(5, 4);
	cout << endl;
	a == b ? cout << "a==b" : cout << "a!=b" ;
	cout << endl;
	a != b ? cout << "a!=b" : cout << "a==b" ;
	cout << endl;
	a > b ? cout << "a>b" : cout << "a<=b" ;
	cout << endl;
	a >= b ? cout << "a>=b" : cout << "a<b" ;
	cout << endl;
	a < b ? cout << "a<b" : cout << "a>=b" ;
	cout << endl;
	a <= b ? cout << "a<=b" : cout << "a>b" ;
	cout << endl;
	a = b;
	cout << a << endl;
	a += b;
	cout << a << endl;
	a *= b;
	cout << a;
	cout << endl << "-----" << endl;
	cout << b << endl;
	cout << ++a << endl;
	cout << a++ <<  endl;
	cout << --a << endl;
	cout << a-- << endl;
	cout << !a << endl;
	system("pause");
	return 0;
}
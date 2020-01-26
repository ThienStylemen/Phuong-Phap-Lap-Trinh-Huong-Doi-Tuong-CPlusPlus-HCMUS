#include "Fraction.h"
using namespace std;
int main() {

	Fraction b;
	b.display();

	Fraction c;
	c.setFraction(5, 6);
	c.display();
	
	cout << c.getNu();
	cout << c.getDe();

	system("pause");
	return 0;
}
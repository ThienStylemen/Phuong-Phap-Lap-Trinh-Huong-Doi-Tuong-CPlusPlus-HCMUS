#include "Circle.h"
using namespace std;
int main() {
	Circle a;
	a.display();

	cout << endl;
	a.setCircle(Point(5, 6), 5);
	a.display();

	cout << endl;
	Point b = a.getCenter();
	b.display();

	float c = a.getRadian();
	cout << c;
	 

	system("pause");
	return 0;
}
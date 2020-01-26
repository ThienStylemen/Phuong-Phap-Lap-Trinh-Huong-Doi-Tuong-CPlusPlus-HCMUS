#include "Rectangle.h"
int main() {
	Rectangle a;
	a.display();
	cout << endl;

	Rectangle b(Point(3, 3), Point(4, 4));
	b.display();
	cout << endl;

	Rectangle c;
	c.setRectangle(Point(5, 5), Point(6, 6));
	c.display();
	cout << endl;
	Point d =c.getTopLeftPoint();
	d.display();

	system("pause");
	return 0;
}
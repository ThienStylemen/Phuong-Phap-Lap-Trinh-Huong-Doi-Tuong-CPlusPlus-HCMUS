#include"Rectangle.h"
int main() {
	Rectangle a(Point(0, 0), Point(1, 1));
	a.display();

	cout << endl;
	Rectangle b;
	b.display();

	cout << endl;
	Rectangle c(a);
	c.display();

	cout << endl;
	Rectangle d(Point(2, 2), Point(3, 3));
	d.display();

	cout << endl;
	Rectangle e(a,d);
	e.display();
	system("pause");
	return 0;
}
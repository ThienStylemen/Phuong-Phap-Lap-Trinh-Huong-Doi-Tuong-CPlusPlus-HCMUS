#include"Triangle.h"
int Point::InstanceCount = 0;
int main() {
	Point *a = new Point(1, 2);
	Point *b = new Point(3, 4);
	Point *c = new Point(5, 6);
	Triangle *d = new Triangle(a, b, c);
	cout << d->ToString() << endl;
	Triangle * e = Triangle::Parse(d->ToString());
	cout << e->ToString();

	system("pause");
	return 0;
}
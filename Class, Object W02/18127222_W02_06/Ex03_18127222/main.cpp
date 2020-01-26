#include "Triangle.h"
using namespace std;
int main() {
	Triangle a;
	a.display();

	cout << endl;
	Triangle b(Point(1,2), Point(3, 4), Point(5, 6));
	b.display();

	cout << endl;
	Triangle c;
	c.setTrianglge(Point(2, 3), Point(4, 5), Point(6, 7));
	c.display();

	cout << endl;
	Point d =c.getFirstPoint();
	d.display();

	system("pause");
	return 0;
}
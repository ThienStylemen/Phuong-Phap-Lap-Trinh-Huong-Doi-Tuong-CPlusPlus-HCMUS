#include"Triangle.h"
int main() {
	Point a(1, 1), b(2, 2), c(5, 2);
	
	Triangle d(a, b, c);
	d.display();
	cout << endl;
	cout << d.Perimeter() << endl;
	cout << d.Superficiality() << endl;

	Triangle e(d);
	e.display();

	cout << endl;
	Triangle f;
	f.display();

	system("pause");
	return 0;
}
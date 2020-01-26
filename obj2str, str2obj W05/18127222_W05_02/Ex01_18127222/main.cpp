#include "Point.h"
int Point::InstanceCount = 0;
int main() {
	Point* end = new Point(2, 3);
	Point* start = new Point(4, 3);
	cout << Point::InstanceCount;
	delete start;
	start = end;
	cout << "Dia diem gap mat " << start->ToString() << endl;
	delete end;
	system("pause");
	return 0;
}
#include "Student.h"
int main() {
	Student a;
	a.display();
	Student b("Nghi", "Phuong", "Nguyen");
	b.display();
	cout << a.getFirst();

	Student c;
	c.setInfor("Nghi", "Phuong", "Nguyen");
	c.display();

	system("pause");
	return 0;
}
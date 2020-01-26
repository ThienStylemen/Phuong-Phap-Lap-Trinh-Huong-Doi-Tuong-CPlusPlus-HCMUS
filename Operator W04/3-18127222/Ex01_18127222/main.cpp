#include"Student.h"
int main() {
	Student b;
	b.display();
	
	cout << endl;
	Student c("Nguyen Phuong Nghi", 7, 7);
	c.display();

	cout << endl;
	Student d(c);
	d.display();

	Student* e = new Student[5];
	delete[] e;

	system("pause");
	return 0;
}
#include"Array.h"
int main() {
	Array<int> m1(10);
	m1.display();

	Array<int> m2;
	m2.display();
	cout << endl;
	Array<int> m3(m1);
	m3.display();

	system("pause");
	return 0;
}
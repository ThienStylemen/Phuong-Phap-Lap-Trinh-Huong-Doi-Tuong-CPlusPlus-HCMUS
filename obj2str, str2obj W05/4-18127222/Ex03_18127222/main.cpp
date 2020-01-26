#include"Array.h"
int main() {
	Array<int> a(3);
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	cout << a[2];
	cin >> a[2];
	cout << a[2];
	cout << endl;
	Array<int> b(3);
	for (int i = 0; i < 3; i++) {
		b[i] = 0;
	}

	b = a;
	for (int i = 0; i < 3; i++) {
		cout << b[i] << "\t";
	}

	
	system("pause");
	return 0;
}
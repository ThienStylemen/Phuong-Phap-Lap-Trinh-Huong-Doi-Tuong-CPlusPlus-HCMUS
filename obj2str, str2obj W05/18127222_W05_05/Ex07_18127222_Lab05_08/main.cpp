#include "DynamicArray.h"
int main() {
	DynamicArray a(5);
	a.display();
	cout << "this is string: " << a.ToString();

	DynamicArray *b = DynamicArray::Parse(a.ToString());
	cout << endl << "object: " << b->ToString();

	system("pause");
	return 0;
}
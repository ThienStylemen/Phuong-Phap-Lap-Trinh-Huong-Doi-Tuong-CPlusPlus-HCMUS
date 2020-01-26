#include "DynamicArray.h"
int main() {
	DynamicArray a;
	a.display();

	a.PushBack(9999);
	a.display();
	
	cout <<"-------------------------"<< endl;
	DynamicArray b;
	b.SetAt(4, 5);
	b.display();


	system("pause");
	return 0;
}
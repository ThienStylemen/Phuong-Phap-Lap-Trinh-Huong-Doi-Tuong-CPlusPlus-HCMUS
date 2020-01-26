#include"Header.h"
int main() {
	Array a;
	a.input();
	cout << endl;
	a.output();
	cout << endl;
	int getElement = a.getElementAtIndex(3);
	cout << getElement << endl;
	cout << "change the value of index 2 : ";
	a.setElementAtIndex(2, 3);
	cout << endl;
	a.output();
	int aFindX = a.findXinArray(3);
	cout << aFindX << endl;
	a.SortAscending();
	a.output();
	cout << endl;
	a.deleteAllMemoryLeaking();
	system("pause");
	return 0;
}
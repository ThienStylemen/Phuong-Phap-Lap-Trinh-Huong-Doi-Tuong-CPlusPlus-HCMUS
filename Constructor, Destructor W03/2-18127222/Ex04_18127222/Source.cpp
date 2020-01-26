#include"Header.h"

void Array::input() {
	cout << "please input n";
	cin >> this->n;
	this->a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "input a[" << i << "]: ";
		cin >> a[i];
	}
}
void Array::deleteAllMemoryLeaking() {
	cout << "deleted";
	delete[] this->a;
}
void Array::output() {
	for (int i = 0; i < this->n; i++)
		cout << this->a[i] << "\t";
}
int Array::getElementAtIndex(int index) {
	if (index < this->n)
		return this->a[index];
	else
		cout << "INVALID index";
}
void Array::setElementAtIndex(int index, int value) {
	if (index < n)
		this->a[index] = value;
	else
		cout << "INVALID index";
}
int Array::findXinArray(int value) {
	for (int i = 0; i < this->n; i++)
		if (this->a[i] == value)
			return i;
	return -1;
}
int Array::getlength() {
	return this->n;
}
void Array::SortAscending() {
	for (int i = 0; i < this->n; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
}

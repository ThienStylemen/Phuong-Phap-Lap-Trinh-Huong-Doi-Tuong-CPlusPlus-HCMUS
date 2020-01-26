#include "DynamicArray.h"

DynamicArray::DynamicArray() {
	this->_a = new int[INITIAL_SIZE];
	this->_len = INITIAL_SIZE;
	for (int i = 0; i < this->_len; i++) {
		this->_a[i] = NULL;
	}
}
DynamicArray::~DynamicArray() {
	delete[] this->_a;
}
void DynamicArray::PushBack(int value) {
	for (int i = 0; i < this->_len; i++)
		if (i == this->_len - 1)
			_a[i] = value;
}
void DynamicArray::display() {
	for (int i = 0; i < this->_len; i++) {
		cout << _a[i];
	}
}

int DynamicArray::GetAt(int i) {
	return this->_a[i];
}
void DynamicArray::SetAt(int i, int value) {
	this->_a[i] = value;
}
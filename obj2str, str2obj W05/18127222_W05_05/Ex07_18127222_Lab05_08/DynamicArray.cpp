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
string DynamicArray::ToString() {
	stringstream writer;
	for (int i = 0; i < this->_len-1; i++) {
		writer << this->_a[i] << ",";
	}
	writer << this->_a[this->_len - 1];
	return writer.str();
}

DynamicArray::DynamicArray(int size) {
	this->_len = size;
	this->_a = new int[this->_len];
	for (int i = 0; i < this->_len; i++) {
		this->_a[i] = 1;
	}
}

DynamicArray* DynamicArray::Parse(string s) {
	string seperator = ",";
	vector<string> v = Tokenizer::Parse(s, seperator);
	DynamicArray *ans = new DynamicArray(v.size());
	for (int i = 0; i < v.size(); i++) {
		ans->_a[i] = stoi(v[i]);
	}
	return ans;
}
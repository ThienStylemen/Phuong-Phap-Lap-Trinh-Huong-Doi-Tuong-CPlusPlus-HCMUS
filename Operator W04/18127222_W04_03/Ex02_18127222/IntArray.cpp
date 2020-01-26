#include "IntArray.h"

ostream& operator<<(ostream& os, const IntArray& a) {
	for (int i = 0; i < a.m_size ; i++)
		os << a.m_a[i] << "\t";
	return os;
}
istream& operator>>(istream& is, IntArray &a){
	for (int i = 0; i < a.m_size; i++)
		is >> a.m_a[i];
	return is;
}
IntArray::IntArray(const IntArray& a) {
	delete[] this->m_a;
	this->m_size = a.m_size;
	for (int i = 0; i < this->m_size; i++) {
		this->m_a[i] = a.m_a[i];
	}
}
int& IntArray::operator[](int i) {
	return this->m_a[i];
}
IntArray::operator int() {
	return this->m_size;
}
IntArray::IntArray(int size) {
	this->m_size = size;
	this->m_a = new int[this->m_size];
}
IntArray::IntArray(){
	this->m_size = 1;
	this->m_a = new int[this->m_size];
	m_a[0] = 0;
}
IntArray IntArray::operator=(const IntArray& a) {
	delete[] this->m_a;
	this->m_size = a.m_size;
	this->m_a = new int[this->m_size];
	for (int i = 0; i < this->m_size; i++) {
		this->m_a[i] = a.m_a[i];
	}
	return *this;
}
IntArray::IntArray(int a[], int n) {
	delete this->m_a;
	this->m_a = a;
	this->m_size = n;
	for (int i = 0; i < this->m_size; i++) {
		this->m_a[i] = a[i];
	}
}

IntArray::~IntArray(){
	delete this->m_a;
}

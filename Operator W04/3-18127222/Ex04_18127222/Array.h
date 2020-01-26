#pragma once
#include <iostream>
using namespace std;

template<class T>
class Array {
public:
	void display();
public:
	Array(const Array& b);
	Array();
	Array(int size);
	~Array();
private:
	T *m_array;
	int m_size;
};


template<class T>
void Array<T>::display() {
	for (int i = 0; i < this->m_size; i++) {
		cout << this->m_array[i];
	}
}
template<class T>
Array<T>::Array(int size) {
	this->m_size = size;
	this->m_array = new T[this->m_size];
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = 0;
}

template<class T>
Array<T>::Array() {
	this->m_size = 0;
	this->m_array = new T[this->m_size];
}

template<class T>
Array<T>::Array(const Array& b) {
	this->m_size = b.m_size;
	this->m_array = new T[b.m_size];
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = b.m_array[i];

}

template<class T>
Array<T>::~Array() {
	delete[] this->m_array;
	cout << "deleted";
}

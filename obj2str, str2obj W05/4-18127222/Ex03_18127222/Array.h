#pragma once
#include<iostream>
using namespace std;

template<class T>
class Array{
private:
	T* m_array;
	int m_size;
public:
	//operator=(const Array& a);
	Array<T> operator=(const Array& a);
	//operator T();
	friend istream& operator>>(ostream& is, Array<T> p);
	friend ostream& operator<<(ostream& os, const Array<T>& p);
	T& operator[](int i);
	Array(int size);
	~Array();
};
template<class T>
T& Array<T>::operator[](int i) {
	return this->m_array[i];
}
//template<class T>
//Array<T> Array<T>::operator=(Array<T> a) {
//	this->m_array = a.m_array;
//	this->m_size = a.m_array;
//	reuturn *this;
//}
template<class T>
Array<T>::Array(int size) {
	this->m_size = size;
	this->m_array = new T[this->m_size];
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = 0;
}
template<class T>
Array<T>::~Array() {
	delete[] this->m_array;
}

template<class T>
ostream& operator<<(ostream& os, const Array<T>& p) {
	for (int i = 0; i < p.m_size; i++) {
		os << p.m_array[i] << "\t";
	}
	return os;
}

template<class T>
istream& operator>>(ostream& is, Array<T> p) {
	for (int i = 0; i < p.m_size; i++) {
		is >> p.m_array[i];
	}
	return is;
}


//template<class T>
//Array<T>::operator T() {
//
//}

template<class T>
Array<T> Array<T>::operator=(const Array<T>& a) {
	this->m_size = a.m_size;
	this->m_array = new T[this->m_size];
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = a.m_array[i];
	return *this;
}

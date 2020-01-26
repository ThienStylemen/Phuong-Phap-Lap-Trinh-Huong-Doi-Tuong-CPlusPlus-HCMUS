#pragma once
#include<iostream>
using namespace std;
class IntArray{
	int* m_a;
	int m_size;
public:

	friend istream& operator>>(istream& is, IntArray &a);
	friend ostream& operator<<(ostream& os, const IntArray& a);
	int& operator[](int i);
	operator int();
	IntArray operator=(const IntArray& a);
	IntArray(const IntArray& a);
	IntArray(int size);
	IntArray(int a[], int n);
	IntArray();
	~IntArray();
};


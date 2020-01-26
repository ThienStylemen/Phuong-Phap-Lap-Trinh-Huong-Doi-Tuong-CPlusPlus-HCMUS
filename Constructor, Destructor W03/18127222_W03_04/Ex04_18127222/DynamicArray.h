#pragma once
#include <iostream>
using namespace std;
class DynamicArray{
private:
	const int INITIAL_SIZE = 128;
private:
	int *_a;
	int _len;
	int _max;
public:
	void display();
public:
	void SetAt(int i, int value);
	void PushBack(int value);
	int GetAt(int i);
public:
	DynamicArray();
	~DynamicArray();
};

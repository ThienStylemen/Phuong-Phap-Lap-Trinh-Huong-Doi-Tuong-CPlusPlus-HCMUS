#pragma once
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
#include"Tokenizer.h"

using namespace std;
class DynamicArray {
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
	string ToString();
public:
	static DynamicArray* Parse(string s);
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();
};

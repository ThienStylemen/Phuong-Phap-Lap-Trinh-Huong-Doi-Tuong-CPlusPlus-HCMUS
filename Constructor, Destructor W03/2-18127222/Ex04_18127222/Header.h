#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Array {
private:
	int n;
	int *a;
public:
	void input();
	void output();
	int getlength();
	int getElementAtIndex(int index);
	void setElementAtIndex(int index, int value);
	int findXinArray(int value);
	void SortAscending();
	void deleteAllMemoryLeaking();
};
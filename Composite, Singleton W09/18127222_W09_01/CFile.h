#pragma once
#include"CItem.h"
#include<vector>
#include<iostream>
using namespace std;
class CFile : public CItem{
	int value;
public:
	void print(bool ans);
	CFile(string name, int value) : CItem(name) {
		this->value = value;
	}
	CFile();
	~CFile();
};

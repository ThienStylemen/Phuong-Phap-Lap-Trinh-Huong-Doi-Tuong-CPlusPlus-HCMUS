#pragma once
#include"CItem.h"

#include<iostream>
using namespace std;
class CFile : public CItem{
protected:
	int size;
public:
	void print(bool showHidden);
	CItem* removeByname(string name);

	CFile(string name, int size) : CItem(name) {
		this->size = size;
	}
	CFile() {
		this->size = 0;
	}
	int getSize() {
		return this->size;
	}
	~CFile();
};

#pragma once
#include<string>
#include<iostream>
using namespace std;
class CItem{
protected:
	string name;
	bool hidden;
	bool readonly;
public:
	bool nameIsMatch(string namecompare);
	virtual void print(bool showHidden);
	virtual int getSize() = 0;
	string getName() {
		return this->name;
	}
	bool getHidden() {
		return this->hidden;
	}
	bool getReadOnly() {
		this->readonly;
	}
	virtual CItem* removeByname(string name) = 0;
	//virtual void remove();
	//virtual CItem* findByName(string name);
	CItem(string name);
	CItem();
	~CItem();
};
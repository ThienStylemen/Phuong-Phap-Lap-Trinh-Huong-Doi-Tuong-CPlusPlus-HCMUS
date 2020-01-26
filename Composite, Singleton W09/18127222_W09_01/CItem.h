#pragma once
#include<string>
#include<iostream>
using namespace std;
class CItem{
	string name;
	bool hidden = false;
public:
	virtual void print(bool ans);
	CItem(string name);
	CItem();
	~CItem();
};
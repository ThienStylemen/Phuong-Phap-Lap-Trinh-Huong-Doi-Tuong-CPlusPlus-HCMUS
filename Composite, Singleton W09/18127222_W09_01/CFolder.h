#pragma once
#include"CItem.h"
#include<vector>
#include<string>
using namespace std;
class CFolder: public CItem{
private:
	vector<CItem*> subItem;
public:
	void add(CItem* item);
	void print(bool ans);
public:
	CFolder(string abc) :CItem(abc) {

	}
	CFolder();
	~CFolder();
};


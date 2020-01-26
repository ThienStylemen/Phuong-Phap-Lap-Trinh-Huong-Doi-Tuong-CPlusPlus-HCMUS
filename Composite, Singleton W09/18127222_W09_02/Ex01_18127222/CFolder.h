#pragma once
#include"CItem.h"
#include<vector>
#include<string>
using namespace std;
class CFolder: public CItem{
private:
	vector<CItem*> subItem;
public:
	int getSize() {
		int ans = 0;
		for (int i = 0; i < this->subItem.size(); i++) {
			ans = ans + this->subItem[i]->getSize();
		}
		return ans;
	}

	void add(CItem* item) {
		this->subItem.push_back(item);
	}
	void print(bool showHidden);
	CItem* removeByname(string name);
	CItem* findByName(string name);
public:
	CFolder(string abc):CItem(abc) {

	}

	CFolder();
	~CFolder() {
		for (int i = 0; i < this->subItem.size(); i++) {
			delete this->subItem[i];
		}
	}
};
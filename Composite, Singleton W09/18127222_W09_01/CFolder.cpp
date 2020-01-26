#include "CFolder.h"

void CFolder::add(CItem* item) {
	CFolder::subItem.push_back(item);
}

void CFolder::print(bool ans) {
	if (ans == 1) {
		for (int i = 0; i < CFolder::subItem.size(); i++) {
			subItem[i]->print(1);
			cout << "\t";
		}
	}
	else {
		for (int i = 0; i < CFolder::subItem.size(); i++) {
			subItem[i]->print(0);
		}
	}
}

CFolder::CFolder(){

}

CFolder::~CFolder(){
	for (int i = 0; i < this->subItem.size(); i++) {
		delete this->subItem[i];
	}
}

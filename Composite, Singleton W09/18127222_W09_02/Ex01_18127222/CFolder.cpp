#include "CFolder.h"

//void CFolder::add(CItem* item) {
//	CFolder::subItem.push_back(item);
//}

void CFolder::print(bool showHidden) {
	if (showHidden == true && this->hidden == true) {
		
	}
	else if (showHidden == true && this->hidden == false) {
		CItem::print(showHidden);
		cout << "Size (int byte): " << this->getSize() << endl;
		cout << "Numbe of sub items: " << this->subItem.size() << endl;
		for (int i = 0; i < this->subItem.size(); i++) {
			this->subItem[i]->print(showHidden);
		}
		cout << "----------------" << endl;
	}
	else {
		CItem::print(showHidden);
		cout << "Size (int bytes)L " << this->getSize() << endl;
		for (int i = 0; i < this->subItem.size(); i++) {
			this->subItem[i]->print(showHidden);
		}
		cout << "---------------" << endl;
	}
	
	CItem::print(showHidden);

}


CItem* CFolder::findByName(string name) {
	for (int i = 0; i < CFolder::subItem.size(); i++) {
		if (CFolder::subItem[i]->nameIsMatch(name)) {
			CFolder::subItem[i]->print(1);
			return CFolder::subItem[i];
		}
		else {
			return nullptr;
		}
	}
}

CItem* CFolder::removeByname(string name) {
	CItem* ans = NULL;
	for (int i = 0; i < this->subItem.size(); i++) {
		if (this->subItem[i]->getName() == name && this->readonly == false) {
			ans = *(this->subItem.erase(this->subItem.begin() + i));
			break;
		}
	}
	if (ans == NULL) {
		for (int i = 0; i < this->subItem.size(); i++) {
			ans = this->subItem[i]->removeByname(name);
			if (ans != NULL)
				break;
		}
	}
	return ans;
}

CFolder::CFolder(){

}


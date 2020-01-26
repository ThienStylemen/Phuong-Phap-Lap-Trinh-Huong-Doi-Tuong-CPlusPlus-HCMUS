#include "CItem.h"

void CItem::print(bool showHidden) {
	cout << "name: " << this->name << endl;
	cout << "Hidden: " << this->hidden << endl;
	cout << "Read only: " << this->readonly << endl;
}

bool CItem::nameIsMatch(string namecompare) {
	if (namecompare == CItem::name)
		return true;
	return false;
}
//
//CItem* CItem::removebyname(string name) {
//	if (name == this->name) return this;
//}
//CItem* CItem::findByName(string name) {
//	if (name == CItem::name) return this;
//}

CItem::CItem(string name) {
	this->name = name;
	this->hidden = false;
	this->readonly = false;
}

CItem::CItem(){
	this->name = "noname";
	this->hidden = false;
	this->readonly = false;
}

CItem::~CItem(){

}

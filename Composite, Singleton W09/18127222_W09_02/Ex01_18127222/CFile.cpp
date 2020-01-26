#include "CFile.h"

//void CFile::print(bool ans) {
//	if (ans == 1) {
//		CItem::print(1);
//		cout << ":" << this->value;
//	}
//	else CItem::print(0);
//}
//CFile::CFile(){
//}

CItem* CFile::removeByname(string name) {
	return NULL;
}

void CFile::print(bool showHidden) {
	if (showHidden == true && this->hidden == true) {
		this->readonly = true;
		CItem::print(true);
	}
	else if (showHidden == true && this->hidden == false) {
		CItem::print(showHidden);
		cout << "Size (int byte): " << this->getSize() << endl;
	}
	else {
		CItem::print(showHidden);
		cout << "Size (int bytes)L " << this->getSize() << endl;
		cout << "---------------" << endl;
	}
}

CFile::~CFile()
{
}

#include "CFile.h"

void CFile::print(bool ans) {
	if (ans == 1) {
		CItem::print(1);
		cout << this->value;
	}
	else CItem::print(0);
}
CFile::CFile(){
}


CFile::~CFile()
{
}

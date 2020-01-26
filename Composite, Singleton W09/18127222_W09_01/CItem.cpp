#include "CItem.h"

void CItem::print(bool ans) {
	if (ans == 1)
		cout << this->name;
	else return;
}


CItem::CItem(string name) {
	this->name = name;
}

CItem::CItem()
{
}


CItem::~CItem()
{
}

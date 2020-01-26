#include "BusinessGate.h"

bool BusinessGate::checkForSaver(Saver a) {
	if (a.isEnoughMoney(BusinessGate::soHang * BusinessGate::donGia)) return true;
	return false;
}

BusinessGate::BusinessGate()
{
}


BusinessGate::~BusinessGate()
{
}

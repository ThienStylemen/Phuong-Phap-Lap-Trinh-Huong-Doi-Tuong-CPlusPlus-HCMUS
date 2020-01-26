#pragma once
#include"Gate.h"
#include"Saver.h"
class BusinessGate : public Gate {
	int donGia = 300;
	int soHang = 3;
public:
	bool checkForSaver( Saver a);
public:
	BusinessGate();
	~BusinessGate();
};


#pragma once
#include"Saver.h"
#include"PowerGate.h"
#include"AcademicGate.h"
#include"BusinessGate.h"
#include<iostream>
#include<string>
using namespace std;
class Gate{
public:
	virtual bool checkForSaver(Saver a)  =0;
public:
	Gate();
	~Gate();
};


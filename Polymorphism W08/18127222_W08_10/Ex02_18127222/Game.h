#pragma once

#include<vector>
#include<iostream>
#include"Gate.h"
#include"AcademicGate.h"
#include"BusinessGate.h"
#include"PowerGate.h"
#include"Saver.h"

using namespace std;
class Game{
private:
	Saver saver;
	vector<Gate*> a;
public:
	void createASaver();
	void InputListOfGate();
	void Process();
public:
	Game();
	~Game();
};

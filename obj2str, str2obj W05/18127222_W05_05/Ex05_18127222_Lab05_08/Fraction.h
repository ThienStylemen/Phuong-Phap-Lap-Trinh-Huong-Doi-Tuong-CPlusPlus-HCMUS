#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include"Tokenizer.h"
using namespace std;

class Fraction{
	int _num;
	int _den;
public:
	Fraction();
	Fraction(int num, int den);
	static Fraction* parse(string s);
	Fraction operator=(const Fraction & other);
	string ToString();
	~Fraction();
};


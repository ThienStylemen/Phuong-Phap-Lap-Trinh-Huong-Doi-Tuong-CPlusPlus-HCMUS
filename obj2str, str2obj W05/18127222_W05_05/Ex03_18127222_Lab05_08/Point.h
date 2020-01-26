#pragma once
#include <iostream>
#include <cmath>
#include<string>
#include<vector>
#include<sstream>
#include"Tokenizer.h"
using namespace std;

class Point {
private:
	float _x;
	float _y;
public:
	static int InstanceCount;
	float X() { return _x; }
	float Y() { return _y; }
	void SetX(float value) { _x = value; }
	void SetY(float value) { _y = value; }
public:
	Point& operator=(const Point& b);
	Point();
	Point(float, float);
	static Point* Parse(string s);
	~Point();
	Point(const Point& other);
	float CalcDistanceTo(const Point* other);
	//static float CalcDistance(const Point* a, const Point*b);
	string ToString();
};
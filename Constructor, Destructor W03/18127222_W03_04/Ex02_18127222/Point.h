#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	float _x;
	float _y;
public:
	void display();
	float X() { return _x; }
	float Y() { return _y; }
	void SetX(float value) { _x = value; }
	void SetY(float value) { _y = value; }
public:
	Point();
	Point(float, float);
	~Point();
	Point(const Point& other);
	float CalcDistanceTo(const Point* other);
};
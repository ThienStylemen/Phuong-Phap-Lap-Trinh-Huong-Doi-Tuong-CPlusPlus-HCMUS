#pragma once
#include<iostream>
#include <vector>
using namespace std;

typedef vector<float> Floats;
typedef vector<Floats> floats2D;
void float2DInit(floats2D &a, int row, int col) {
	a.resize(row);
	for (int i = 0; i < a.size(); i++) {
		a[i].resize(col);
	}
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			a[i][j] = 1;
		}
	}
}

class Cinema{
	const int row = 15;
	const int col = 30;
	const int central_row = 7;
	const double discount_far_each_row_from_central = 0.5;
	floats2D seat; 
public:
	double Tell_Rate_of_a_seat(int row);
	bool check_a_seat_is_empty(int row, int col);
	bool Book_A_Seat(int row, int col);

	Cinema();
	~Cinema();
};


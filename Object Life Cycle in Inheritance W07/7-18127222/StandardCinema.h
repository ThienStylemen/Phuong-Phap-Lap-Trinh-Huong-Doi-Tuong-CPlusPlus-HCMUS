#pragma once
#include "Cinema.h"
class StandardCinema :public Cinema{
	const int price_at_central_row = 10;
public:
	double calculate_all_sold();
	double Tell_price_of_a_seat(int row);
	StandardCinema() :Cinema() {

	}
	~StandardCinema();
};


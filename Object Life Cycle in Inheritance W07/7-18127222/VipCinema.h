#pragma once
#include"Cinema.h"
class VipCinema: public Cinema{
	const int price_at_central_row = 15;
public:
	double Tell_price_of_a_seat(int row);
	double calculate_all_sold();
	VipCinema() :Cinema() {

	}
	~VipCinema();
};


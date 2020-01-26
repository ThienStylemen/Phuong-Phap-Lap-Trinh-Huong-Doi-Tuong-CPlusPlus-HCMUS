#include "VipCinema.h"


double VipCinema::Tell_price_of_a_seat(int row) {
	return (this->price_at_central_row - Cinema::Tell_Rate_of_a_seat(row));
}

VipCinema::~VipCinema()
{
}

double VipCinema::calculate_all_sold() {
	double sum = 0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			if (!this->check_a_seat_is_empty(i, j)) {
				sum = sum + this->Tell_price_of_a_seat(i);
			}
		}
	}
	return sum;
}
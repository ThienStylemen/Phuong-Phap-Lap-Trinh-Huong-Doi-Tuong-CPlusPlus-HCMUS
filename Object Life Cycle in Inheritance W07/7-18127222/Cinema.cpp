#include "Cinema.h"

Cinema::Cinema(){
	float2DInit(this->seat, this->row, this->col);
}
bool Cinema::check_a_seat_is_empty(int row, int col) {
	if (this->seat[row][col] != 1)	// is empty
		return true;
	return false;
}
double Cinema::Tell_Rate_of_a_seat(int row) {
	if (row != this->central_row)
		return (this->discount_far_each_row_from_central * this->central_row - row);
}
bool Cinema::Book_A_Seat(int row, int col) {
	bool is_empty = check_a_seat_is_empty(row, col);
	if (is_empty) {
		this->seat[row][col] = 0;	// booked
		return true;
	}
	else
		return false;
}
Cinema::~Cinema(){

}

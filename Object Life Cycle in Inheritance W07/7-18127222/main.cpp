#include"Cinema.h"
#include"StandardCinema.h"
#include"VipCinema.h"
int main() {
	StandardCinema a;
	
	cout << a.check_a_seat_is_empty(3, 3) << endl;
	cout << a.Tell_price_of_a_seat(4) << endl;

	bool ans = a.Book_A_Seat(4, 4);
	cout << ans << endl;

	cout << a.calculate_all_sold() << endl;

	VipCinema b;
	cout << b.check_a_seat_is_empty(3, 3) << endl;
	cout << b.Tell_price_of_a_seat(4) << endl;

	bool ans2 = b.Book_A_Seat(4, 4);
	cout << ans2 << endl;

	cout << b.calculate_all_sold() << endl;


	
	system("pause");
	return 0;
}
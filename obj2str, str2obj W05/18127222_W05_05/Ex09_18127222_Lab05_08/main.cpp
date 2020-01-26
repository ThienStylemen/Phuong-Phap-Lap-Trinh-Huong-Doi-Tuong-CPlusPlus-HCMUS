#include"Date.h"
int main() {
	Date *d = new Date();
	cout << d->ToString();
	Date* dateparse = Date::Parse(d->ToString());
	cout << endl << dateparse->ToString();
	Date *e = new Date(3, 4, 2019);
	cout << endl << e->is_Valid_Date();
	system("pause");
	return 0;
}
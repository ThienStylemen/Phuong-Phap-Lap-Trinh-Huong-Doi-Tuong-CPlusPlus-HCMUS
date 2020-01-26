#include"Date.h"
#include"Employee.h"
#include"NhanVienSX.h"
#include"NhanVienCongNhat.h"
int main() {
	NhanVienSX a(35);
	a.InputInforMation();
	a.OutputInformation();
	
	cout << endl;

	Date date (22, 10, 2000);
	NhanVienSX ntt("1", "Thien", date , "139 TL9 Ba Ngoi Cam Ranh Khanh Hoa", 30);
	ntt.OutputInformation();
	cout << ntt.calWage() << endl;
	cout << endl;
	NhanVienCongNhat b(35);
	b.InputInforMation();
	b.OutputInformation();
	cout << b.calWage();

	NhanVienCongNhat ntt2("2", "Nguyen Tan Thien2", date, "139 TL9 Ba Ngoi Cam Ranh Khanh Hoa", 25);
	cout << endl <<  ntt2.calWage();


	system("pause");
	return 0;
}
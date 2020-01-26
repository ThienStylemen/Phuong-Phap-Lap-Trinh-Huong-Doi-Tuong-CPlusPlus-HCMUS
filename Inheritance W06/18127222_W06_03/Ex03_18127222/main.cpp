#include"DocGia.h"
#include"DocGiaThuong.h"
#include"DocGiaVip.h"
int main() {
	Date a(22, 10, 2000);
	DocGiaThuong b("1", " Nguyen Tan Thien", a, true);

	b.OutputInformation();

	DocGiaThuong c;
	c.InputInformation();
	c.OutputInformation();

	cout << endl << c.Fee(20) << endl;
	DocGiaVip d("1", " Nguyen Tan Thien", a, true);
	d.OutputInformation();


	system("pause");
	return 0;
}
#include"GmtTime.h"
#include"Time.h"
int main() {
	Time b;
	b.display();
	GmtTime a;
	cout << a.ToString(0) << endl;

	GmtTime now(2, 2, 2);
	cout << now.ToString(25) << endl;

	system("pause");
	return 0;
}
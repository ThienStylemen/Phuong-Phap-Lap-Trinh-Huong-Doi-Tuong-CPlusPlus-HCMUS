#include"Teacher.h"
#include"ClassroomTeacher.h"
int main() {
	Teacher a("1","Nguyen Tan Thien", 0);
	a.OutputInformation();
	cout << a.calSalary() << endl;

	ClassroomTeacher b;
	b.setInformation("2", "Nguyen Tan Thien 2", 20);
	b.OutputInformation();
	cout << b.calSalaryClassRoomTeacher();

	cout << endl;
	ClassroomTeacher c;
	c.InputInformation();
	c.OutputInformation();


	system("pause");
	return 0;
}
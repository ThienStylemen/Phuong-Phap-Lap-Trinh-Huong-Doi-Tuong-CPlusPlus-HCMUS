#include<iostream>
#include"CItem.h"
#include"CFolder.h"
#include"CFile.h"
int main() {

	CFolder C("C");
	CFolder System("System");
	CFolder Windows("Windows");
	
	CFile a_txt("a.txt", 123);
	CFile b_txt("b.doc", 456);

	System.add(&a_txt);
	Windows.add(&b_txt);

	C.add(&System);
	C.add(&Windows);

	cout << "Noi dung cua o C ->" << endl;
	C.print(1);

	CItem *p = 



	system("pause");
	return 0;
}
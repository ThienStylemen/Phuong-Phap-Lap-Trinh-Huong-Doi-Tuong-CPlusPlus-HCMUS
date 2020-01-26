#include<iostream>
#include"CItem.h"
#include"CFolder.h"
#include"CFile.h"
int main() {

	CFolder C("C");
	cout << "----------- " << endl;
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

	CItem* p = C.removeByname("System");
	cout << endl;
	C.print(1);
	cout << endl;
	cout << "-----------------------" << endl;
	p = C.findByName("b.doc");
	if (p != nullptr) cout << "Tim thay tap tin b.doc trong o dia C" << endl;
	else cout << "khong tim thay tap tin b.doc trong o dia C" << endl;

	p = C.findByName("Windows");
	if (p != nullptr) cout << "Tim thay tap tin Window trong o dia C" << endl;
	else cout << "khong tim thay tap tin Windows trong o dia C" << endl;

	cout << endl << "-------------" << endl;
	p = C.findByName("a.txt");
	if (p != nullptr) cout << "Tim thay tap tin a.txt trong o dia C" << endl;
	else cout << "khong tim thay tap tin a.txt trong o dia C" << endl;

	system("pause");
	return 0;
}
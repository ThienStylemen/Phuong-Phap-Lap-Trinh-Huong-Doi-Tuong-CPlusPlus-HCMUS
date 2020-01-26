#pragma once
#include"Employee.h"
#include<string>
class NhanVienCongNhat:public Employee{
	int salary;
	const int unit = 300000;
	int days_work;
public:
	NhanVienCongNhat(string id, string name, Date date_of_birth, string address, int number_of_product);
	int calWage();
	NhanVienCongNhat(int days_work);
	NhanVienCongNhat();
	~NhanVienCongNhat();
};


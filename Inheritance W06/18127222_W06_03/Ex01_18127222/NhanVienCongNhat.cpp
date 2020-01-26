#include "NhanVienCongNhat.h"



NhanVienCongNhat::NhanVienCongNhat()
{
}


NhanVienCongNhat::~NhanVienCongNhat()
{
}
NhanVienCongNhat::NhanVienCongNhat(string id, string name, Date date_of_birth, string address, int days_work) {
	this->setInforMation(id, name, date_of_birth, address);
	this->days_work = days_work;

}
int NhanVienCongNhat::calWage() {
	this->salary = this->unit * this->days_work;
	return this->salary;
}
NhanVienCongNhat::NhanVienCongNhat(int days_work) {
	this->days_work = days_work;
}
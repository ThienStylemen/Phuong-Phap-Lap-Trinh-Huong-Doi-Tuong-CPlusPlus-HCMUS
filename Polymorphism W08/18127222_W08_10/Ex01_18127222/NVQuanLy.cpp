#include "NVQuanLy.h"

void NVQuanLy::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> this->he_so_chuc_vu;
	cout << "Nhap thuong: ";
	cin >> this->thuong;
}
void NVQuanLy::Xuat() {
	NhanVien::Xuat();
	cout << this->he_so_chuc_vu << endl;
	cout << this->thuong << endl;
}
double NVQuanLy::TinhLuong() {
	return NhanVien::TinhLuong()* this->he_so_chuc_vu + this->thuong;
}
int NVQuanLy::getType() {
	return 3;
}

bool NVQuanLy::check_name(string name) {
	return NhanVien::check_name(name);
}
bool NVQuanLy::check_ma(int ma) {
	return NhanVien::check_ma(ma);
}
bool NVQuanLy::check_thang_sinh(unsigned int thangsinh) {
	return NhanVien::check_thang_sinh(thangsinh);
}
NVQuanLy::NVQuanLy(){
}


NVQuanLy::~NVQuanLy()
{
}

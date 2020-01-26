#include "NVCongNhat.h"


void NVCongNhat::Nhap() {
	NhanVien::Nhap();
	cout << "He so luong: ";
	cin >> heSo;
	cout << "Luong CB: ";
	cin >> luongCB;
}

void NVCongNhat::Xuat() {
	NhanVien::Xuat();
	// cout << "Luong: " << TinhLuong() << endl;
	cout << "He so luong: " << heSo << endl;
	cout << "Luong CB: " << luongCB << endl;
}

double NVCongNhat::TinhLuong() {
	// NhanVien::TinhLuong();
	// Đề phòng sau này thay đổi qui định, nhân viên công ty mặc định được trợ cấp 1.000.0000 VND
	return NhanVien::TinhLuong() + heSo * luongCB;
}

int NVCongNhat::getType() {
	return 2;
}

bool NVCongNhat::check_name(string name) {
	return NhanVien::check_name(name);
}
bool NVCongNhat::check_ma(int ma) {
	return NhanVien::check_ma(ma);
}
bool NVCongNhat::check_thang_sinh(unsigned int thangsinh){
	return NhanVien::check_thang_sinh(thangsinh);
}
NVCongNhat::NVCongNhat() {
}


NVCongNhat::~NVCongNhat()
{
}

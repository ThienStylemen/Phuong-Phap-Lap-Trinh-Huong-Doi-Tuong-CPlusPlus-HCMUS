#include "NhanVien.h"

void NhanVien::Nhap() {
	do {
		cout << "Ma NV: ";
		cin >> maNV;
	} while (maNV <= 0);
	cout << "Ho ten: ";
	cin.ignore(1);
	getline(cin, hoTen);
	cout << "Dia chi: ";
	getline(cin, diaChi);
	cout << "Nam vao lam:";
	getline(cin, this->nameVaoLam);
	cout << "Nhap thang sinh:";
	cin >> this->thangsinh;
}

void NhanVien::Xuat(){
	cout << "Ma NV: " << maNV << endl;
	cout << "Ho ten: " << hoTen << endl;
	cout << "Dia chi: " << diaChi << endl;
	cout << "Nam vao lam: " << this->nameVaoLam << endl;
	cout << "Thang sinh: " << this->thangsinh << endl;
	cout << "Luong: " << TinhLuong() << endl;
}

double NhanVien::TinhLuong(){
	return 0;
	/*
	// SAI
	if(loaiNV == 1) Tính lương theo NVSanXuat
	else Tính lương theo NVCongNhat
	 */
}

bool NhanVien::check_name(string name) {
	if (this->hoTen == name)
		return true;
	return false;
}

bool NhanVien::check_ma(int ma) {
	if (this->maNV == ma)
		return true;
	return false;
}

bool NhanVien::check_thang_sinh(unsigned int thangsinh) {
	if (this->thangsinh == thangsinh)
		return true;
	return false;
}
NhanVien::NhanVien()
{
}


NhanVien::~NhanVien()
{
}

#include "NVSanXuat.h"

void NVSanXuat::Nhap() {
	// Gọi lại hàm Nhap() của NhanVien, để nhập maNV, hoTen, diaChi
	NhanVien::Nhap();
	// Nhập số sản phẩm
	cout << "So san pham: ";
	cin >> soSP;
}

void NVSanXuat::Xuat() {
	NhanVien::Xuat();
	// cout << "Luong: " << TinhLuong() << endl;
	cout << "So san pham: " << soSP << endl;
}

double NVSanXuat::TinhLuong() {
	// NhanVien::TinhLuong();
	// Đề phòng sau này thay đổi qui định, nhân viên công ty mặc định được trợ cấp 1.000.0000 VND
	return NhanVien::TinhLuong() + soSP * 10000;
}

int NVSanXuat::getType() {
	return 1;
}

bool NVSanXuat::check_name(string name) {
	return NhanVien::check_name(name);
}
bool NVSanXuat::check_ma(int ma) {
	return NhanVien::check_ma(ma);
}
bool NVSanXuat::check_thang_sinh(unsigned int thangsinh) {
	return NhanVien::check_thang_sinh(thangsinh);
}

NVSanXuat::NVSanXuat()
{
}


NVSanXuat::~NVSanXuat()
{
}


#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Base class
class NhanVien {
private:
	// 3 thuộc tính
	int maNV;
	string hoTen;
	string diaChi;
	string nameVaoLam;
	unsigned int thangsinh;
public:
	// 2 hàm
	virtual bool check_ma(int ma);
	virtual bool check_name(string name);
	virtual bool check_thang_sinh(unsigned int thangsinh);
	virtual int getType() = 0;;
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
public:
	NhanVien();
	~NhanVien();
};
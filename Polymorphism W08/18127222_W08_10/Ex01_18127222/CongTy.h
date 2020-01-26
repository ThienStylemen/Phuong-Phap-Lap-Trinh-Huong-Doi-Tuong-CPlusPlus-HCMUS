#pragma once
#include"NhanVien.h"
#include"NVCongNhat.h"
#include"NVSanXuat.h"
#include"NVQuanLy.h"
#include<string>
#include<vector>
class CongTy {
private:

	string name;
	vector<NhanVien*> a; // DUNG
	// vector<NhanVien> *a; // SAI
	// vector<NhanVien> a; // SAI
public:
	void NhapDS();
	void XuatDS();
	double TinhTongLuong();
	NhanVien* TimNhanVienLuongCaoNhat();
	unsigned int dem_so_NVSanXuat();
	unsigned int dem_so_NVCongNhat();
	double TinhLuongTrungBinh();
	void LietKeNVLuongDuoi3000();
	void TimNhanVienBangTen();
	void TimNhanVienBangMa();
	unsigned int dem_so_NV_sinh_thang5();
	
public:
	CongTy();
	~CongTy();
};
#include "CongTy.h"

NhanVien* CongTy::TimNhanVienLuongCaoNhat() {
	double max = 0;
	NhanVien* p = NULL;
	for (int i = 0; i < CongTy::a.size(); i++) {
		if (CongTy::a[i]->TinhLuong() > max) {
			p = a[i];
			max = this->a[i]->TinhLuong();
		}
	}
	return p;
}

void CongTy::LietKeNVLuongDuoi3000() {
	for (int i = 0; i < CongTy::a.size(); i++) {
		if (CongTy::a[i]->TinhLuong() < 3000) {
			a[i]->Xuat();
		}
	}
}

double CongTy::TinhLuongTrungBinh() {
	return this->TinhTongLuong() / this->a.size();
}

unsigned int CongTy::dem_so_NVSanXuat() {
	unsigned int a = 0;
	for (int i = 0; i < this->a.size(); i++) {
		if (this->a[i]->getType() == 1)
			a++;
	}
	return a;
}

unsigned int CongTy::dem_so_NVCongNhat() {
	unsigned int a = 0;
	for (int i = 0; i < this->a.size(); i++) {
		if (this->a[i]->getType() == 2)
			a++;
	}
	return a;
}

void CongTy::NhapDS() {
	int n;
	int type;
	NhanVien *p;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin nhan vien thu " << i << endl;
		cout << "Loai nhan vien (1: NVSX; 2: NVCN; 3: NVQL): ";
		cin >> type;
		p = NULL;
		if (type == 1) {
			p = new NVSanXuat; // DUNG
			// NVSanXuat nv; // SAI
			// nv.Nhap(); // SAI
			// a.push_back(nv); // SAI
		}
		else if (type == 2) {
			p = new NVCongNhat; // DUNG
			// NVCongNhat nv; // SAI
			// nv.Nhap(); // SAI
			//a.push_back(nv); // SAI
		}
		else if (type == 3) {
			p = new NVQuanLy;
		}
		p->Nhap(); // DUNG
		a.push_back(p); // DUNG
	}
}

double CongTy::TinhTongLuong() {
	double sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i]->TinhLuong(); // DUNG
		//sum += a[i].TinhLuong(); // SAI
	}
	return sum;
}

void CongTy::TimNhanVienBangTen() {
	string name;
	cout << "Nhap ten nhan vien can tim: ";
	cin >> name;
	for (int i = 0; i < CongTy::a.size(); i++) {
		if (a[i]->check_name(name))
			a[i]->Xuat();
	}
}

void CongTy::TimNhanVienBangMa() {
	int ma;
	cout << "Nhap ma nhan vien can tim: ";
	cin >> ma;
	for (int i = 0; i < CongTy::a.size(); i++) {
		if (a[i]->check_ma(ma))
			a[i]->Xuat();
	}
}

unsigned int CongTy::dem_so_NV_sinh_thang5() {
	unsigned int a = 0;
	for (int i = 0; i < this->a.size(); i++) {
		if (this->a[i]->check_thang_sinh(5))
			a++;
	}
	return a;
}

void CongTy::XuatDS() {
	for (int i = 0; i < this->a.size(); i++) {
		a[i]->Xuat();
	}
}

CongTy::CongTy(){

}

CongTy::~CongTy(){
	for (int i = 0; i < this->a.size(); i++) {
		delete a[i];
	}
}

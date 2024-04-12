#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class PhanSo
{
	float tu, mau;
public:
	void Nhap();
	void Xuat();
	int KiemTra();
	PhanSo Tru(PhanSo);
	PhanSo Cong(PhanSo);
	PhanSo Nhan(PhanSo);
	PhanSo Chia(PhanSo);
	void RutGon();
};


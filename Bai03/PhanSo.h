#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
	float tu, mau;
public:
	void Nhap();
	void Xuat();
	int KiemTra();
	PhanSo Hieu(PhanSo);
	PhanSo MAX(PhanSo);
};


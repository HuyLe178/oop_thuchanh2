#pragma once
#include<iostream>
using namespace std;
class ngay
{
	int ng, th, nm;
public:
	void Nhap();
	void Xuat();
	bool KiemTraNamNhuan();
	long SoThuTu();
	int STTTrongNam();
	ngay TimNgay(long);
	ngay TimNgay(int, int);
	ngay TimNgayKeTiep();
};

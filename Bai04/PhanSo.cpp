#include "PhanSo.h"
void PhanSo::Nhap()
{
	do {
		cout << "Nhap tu so ";
		cin >> tu;
		cout << "Nhap mau so ";
		cin >> mau;
		if (mau == 0)cout << "Mau so khong duoc bang 0\n";
	} while (mau == 0);
}
void PhanSo::Xuat()
{
	if (tu == 0)cout << 0 << endl;
	else cout << tu << "/" << mau << endl;
}
int PhanSo::KiemTra()
{
    if (tu * mau > 0)
        return 1;
    if (tu * mau < 0)
        return -1;
    return 0;
}
void PhanSo::RutGon()
{
	float a = abs(tu);
	float b = abs(mau);
	if (a == 0 || b == 0)
	{
		mau = 0;

	}
	else
	{
		while (a * b != 0)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		tu = tu / a;
		mau = mau / a;
	}
}
PhanSo PhanSo::Cong(PhanSo ps2)
{
	PhanSo tmp;
	tmp.tu = tu * ps2.mau + ps2.tu * mau;
	tmp.mau = mau * ps2.mau;
	tmp.RutGon();
	return tmp;
}
PhanSo PhanSo::Tru(PhanSo b) {
    PhanSo kq;
    kq.tu = tu * b.mau - b.tu * mau;
    kq.mau = mau * b.mau;
	kq.RutGon();
    return kq;
}
PhanSo PhanSo::Nhan(PhanSo ps2)
{
	PhanSo tmp;
	tmp.tu = tu * ps2.tu;
	tmp.mau = mau * ps2.mau;
	tmp.RutGon();
	return tmp;
}

PhanSo PhanSo::Chia(PhanSo b)
{
	PhanSo tmp;
	tmp.tu = tu * b.mau;
	tmp.mau = mau * b.tu;
	tmp.RutGon();
	return tmp;
}

#include<iostream>
#include"PhanSo.h"
using namespace std;
int main()
{
    PhanSo x;
    x.Nhap();
    int kq = x.KiemTra();
    x.Xuat();

    if (kq > 0) cout << "\nPhan so > 0 ";
    else if (kq < 0)cout << "\nPhan so < 0";
    else cout << "\nPhan so = 0";
    return 0;
}

#include<iostream>
#include"PhanSo.h"
using namespace std;

int main()
{
    PhanSo x, y,kq;
    cout << "Nhap phan so thu nhat:\n";
    x.Nhap();
    cout << "Nhap phan so thu hai:\n";
    y.Nhap();
    x.Xuat();
    y.Xuat();
    cout << "Phan so lon hon la ";
    kq = x.MAX(y);
    kq.Xuat();
    return 0;
}
#include<iostream>
#include"PhanSo.h"
using namespace std;

int main()
{
    PhanSo x, y, tong,hieu,tich,thuong;
    cout << "Nhap phan so thu nhat:\n";
    x.Nhap();
    cout << "Nhap phan so thu hai:\n";
    y.Nhap();
    x.Xuat();
    y.Xuat();    
    tong = x.Cong(y);
    hieu = x.Tru(y);
    tich = x.Nhan(y);
    thuong = x.Chia(y);
    cout << "a+b=";
    tong.Xuat();
    cout << "a-b=";
    hieu.Xuat();
    cout << "a*b=";
    tich.Xuat();
    cout << "a/b=";
    thuong.Xuat();
    
    return 0;
}
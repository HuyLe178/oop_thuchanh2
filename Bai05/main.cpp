#include <iostream>
#include"SoPhuc.h"
using namespace std;
int main()
{
    SoPhuc a, b,tong,hieu,tich,thuong;
    cout << "Nhap so phuc thu nhat :\n";
    a.Nhap();
    cout << "Nhap so phuc thu hai :\n";
    b.Nhap();
    a.Xuat();
    b.Xuat();
    tong = a.Cong(b);
    hieu = a.Tru(b);
    tich = a.Nhan(b);
    thuong = a.Chia(b);
    cout << "Tong a+b="; 
    tong.Xuat();
    cout << "\nHieu a-b= ";
    hieu.Xuat();
    cout << "\nTich a*b="; 
    tich.Xuat();
    cout << "\nThuong a/b="; 
    thuong.Xuat();
    return 0;

}

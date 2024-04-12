#include<iostream>
#include<math.h>
#include"diem.h"
#include"duongtron.h"
using namespace std;
int main()
{
    duongtron a;
    a.Nhap();
    a.Xuat();
    cout << "\nChu vi duong tron= " <<a.ChuVi();
    cout << "\nDien tich duong tron= " << a.DienTich();

    return 0;
}

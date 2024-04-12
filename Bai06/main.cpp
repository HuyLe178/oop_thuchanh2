#include<iostream>
#include"ngay.h"
using namespace std;
int main() {
    ngay a;
    a.Nhap();
    a.Xuat();
    ngay kq = a.TimNgayKeTiep();
    cout << "ngay ke tiep la: ";
    kq.Xuat();
    return 0;
}

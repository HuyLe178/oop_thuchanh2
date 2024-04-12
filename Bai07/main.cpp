#include<iostream>
#include"ngay.h"
using namespace std;
int main() {
    ngay a;
    a.Nhap();
    a.Xuat();
    ngay kq = a.TimNgayHomQua();
    cout << "ngay hom qua la : ";
    kq.Xuat();
    return 0;
}

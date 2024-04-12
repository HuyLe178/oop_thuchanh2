#include<iostream>
#include"diem.h"
using namespace std;
int main() {
    diem a, b;
    cout << "Nhap diem thu nhat: \n";
    a.Nhap();
    cout << "Nhap diem thu hai: \n";
    b.Nhap();
    a.Xuat();
    b.Xuat();
    cout << "Khoan cach giua hai diem la " << a.KhoangCach(b);


	return 0;
}
#include<iostream>
#include<math.h>
#include"CTamgiac.h"
#include"CDiem.h"
using namespace std;
int main()
{
    CTamgiac x;
    x.Nhap();
    while (x.Kiemtrahople() == 0) {
        cout << "Tam giac khong hop le vui long nhap lai!\n";
        x.Nhap();
    }
    x.Xuat();
    cout << "Chu vi :" << x.ChuVi();
    cout << "\nDien tich :" << x.DienTich();
    CDiem Trongtam;
    Trongtam = x.Tinhtrongtam();
    cout << "Trong tam tam giac la \n";
    Trongtam.Xuat();

    return 0;
}
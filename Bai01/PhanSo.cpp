#include "PhanSo.h"
void PhanSo::Nhap ()
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

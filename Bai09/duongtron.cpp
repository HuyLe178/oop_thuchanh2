#include "duongtron.h"
void duongtron::Nhap()
{
    cout << "Nhap tam hinh tron \n";
    tam.Nhap();
    cout << "Nhap ban kinh ";
    cin >> R;
}
void duongtron::Xuat( )
{
    cout << "Hinh tron co tam :";
    tam.Xuat();
    cout << "Ban kinh r=" << R;
}
float duongtron::ChuVi( )
{
    return 2 * 3.14 * R;
}
float duongtron::DienTich( )
{
    return 3.14 * R * R;
}

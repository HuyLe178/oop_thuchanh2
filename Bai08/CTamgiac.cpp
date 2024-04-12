#include "CTamgiac.h"
void CTamgiac::Nhap() {

    cout << "Nhap dinh a\n";
    a.Nhap();
    cout << "Nhap dinh b \n";
    b.Nhap();
    cout << "Nhap dinh c \n";
    c.Nhap();
}
bool CTamgiac::Kiemtrahople()
{
    float AB = a.KhoangCach(b);
    float BC = b.KhoangCach(c);
    float CA = c.KhoangCach(a);
    if (AB + BC > CA && BC + CA > AB && AB + CA > BC) return 1;
    return 0;

}

void CTamgiac::Xuat()
{
    cout << "Dinh a ";
    a.Xuat();
    cout << "Dinh b ";
    b.Xuat();
    cout << "Dinh c ";
    c.Xuat();
}
float CTamgiac::ChuVi()
{
    return a.KhoangCach(b) + b.KhoangCach( c) + a.KhoangCach(c);
}

float CTamgiac::DienTich()
{
    float ab = a.KhoangCach( b);
    float bc = b.KhoangCach(c);
    float ac = a.KhoangCach(c);
    float p = ab + bc + ac;
    return sqrt(p * (p - ab) * (p - bc) * (p - ac));

}
CDiem CTamgiac::Tinhtrongtam() {
    CDiem G;
    float GX = (a.LayX() + b.LayX() + c.LayX()) / 3;
    float GY = (a.LayX() + b.LayY() + c.LayY()) / 3;
    G.GanX(GX);
    G.GanY(GY);
    return G;

}
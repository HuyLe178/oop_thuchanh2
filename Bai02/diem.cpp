#include "diem.h"

void diem::Nhap()
{
    cout << "Nhap x ";
    cin >> x;
    cout << "Nhap y ";
    cin >> y;
}

void diem::Xuat()
{
    cout << "(" << x << "," << y << ")" << endl;

}

float diem::KhoangCach(diem a)
{
    float kc = sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
    return kc;

}
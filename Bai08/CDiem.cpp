#include "CDiem.h"

void CDiem::Nhap()
{
    cout << "Nhap x ";
    cin >> x;
    cout << "Nhap y ";
    cin >> y;
}

void CDiem::Xuat()
{
    cout << "(" << x << "," << y << ")" << endl;

}

float CDiem::KhoangCach(CDiem a)
{
    float kc = sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
    return kc;

}
float CDiem::LayX() 
{
    int temp = x;
    return temp;
}
void CDiem::GanX(float a) 
{   
    this->x = a;

}
float CDiem::LayY()
{
    int temp = y;
    return temp;
}
void CDiem::GanY(float a)
{
    this->y = a;

}

#include "SoPhuc.h"
void SoPhuc::Nhap() {
    cout << "Nhap Phan Thuc ";
    cin >> thuc;
    cout << "Nhap Phan Ao ";
    cin >> ao;
}
void SoPhuc::Xuat() 
{
    cout << thuc << " ";
    if (ao >= 0)cout << "+ ";
    cout << ao << "i\n";
}
SoPhuc SoPhuc::Cong(SoPhuc b)
{
    SoPhuc c;
    c.thuc = thuc + b.thuc;
    c.ao = b.ao + ao;
    return c;
}
SoPhuc SoPhuc::Tru( SoPhuc b)
{
    SoPhuc c;
    c.thuc =  thuc - b.thuc;
    c.ao = ao -  b.ao;
    return c;
}
SoPhuc SoPhuc::Nhan( SoPhuc b)
{
    SoPhuc c;
    c.thuc =  thuc*b.thuc - b.ao *ao;
    c.ao =  thuc * b.ao + b.thuc *ao;
    return c;
}
SoPhuc SoPhuc::Chia( SoPhuc b)
{
    SoPhuc temp;
    temp.thuc = ( thuc * b.thuc +  ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    temp.ao = ( ao * b.thuc -  thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    return temp;
}

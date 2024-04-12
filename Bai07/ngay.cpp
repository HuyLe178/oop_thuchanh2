#include "ngay.h"
void ngay::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> ng;
    cout << "Nhap thang: ";
    cin >> th;
    cout << "Nhap nam: ";
    cin >> nm;
}
void ngay::Xuat()
{
    cout << ng << "/" << th << "/" << nm << endl;
}
bool ngay::KiemTraNamNhuan()
{
    if (nm % 4 == 0 && nm % 100 != 0)
    {
        return 1;
    }
    if (nm % 400 == 0)
    {
        return 1;
    }
    return 0;

}
long ngay::SoThuTu()
{
    int nam = 1;
    int songay = 365;
    long stt = 0;
    for (int i = 1; i < nm; i++)
    {
        stt = stt + 365;
        ngay temp;
        temp.ng = 1;
        temp.th = 1;
        temp.nm = i;
        if (temp.KiemTraNamNhuan() == 1)
            stt = stt + 1;
    }
    return stt + this->STTTrongNam();
}
int ngay::STTTrongNam()
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (this->KiemTraNamNhuan() == 1)
    {
        ngaythang[1] = 29;
    }
    int stt = 0;
    for (int i = 1; i < th; i++)
    {
        stt = stt + ngaythang[i - 1];
    }
    return stt + ng;
}
ngay ngay::TimNgay(long stt)
{
    int nam = 1;
    int songay = 365;
    while (stt - songay > 0)
    {
        stt = stt - songay;
        nam++;
        ngay temp;
        temp.ng = 1;
        temp.th = 1;
        temp.nm = nam;
        if (temp.KiemTraNamNhuan() == 1)
            songay = 366;
        else
            songay = 365;
    }
    return TimNgay(nam, stt);
}
ngay ngay::TimNgay(int nam, int stt)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    ngay a;
    a.ng = 1;
    a.th = 1;
    a.nm = nam;
    if (a.KiemTraNamNhuan() == 1)
    {
        ngaythang[1] = 29;
    }
    a.th = 1;
    while (stt - ngaythang[a.th - 1] > 0)
    {
        stt = stt - ngaythang[a.th - 1];
        a.th++;
    }
    a.ng = stt; return a;
}
ngay ngay::TimNgayHomQua()
{
    long stt = this->SoThuTu();
    stt--;
    return TimNgay(stt);
}
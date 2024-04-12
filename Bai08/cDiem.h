#pragma once
using namespace std;
#include<math.h>
#include<iostream>
class CDiem
{
private:
	float x, y;
public:
	void Nhap();
	void Xuat();
	float KhoangCach(CDiem);
	float LayX();
	void GanX(float);
	float LayY();
	void GanY(float);
	
};


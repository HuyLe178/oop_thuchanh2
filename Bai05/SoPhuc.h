#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
	float thuc, ao;
public:
	void Nhap();
	void Xuat();
	SoPhuc Cong(SoPhuc b);
	SoPhuc Tru(SoPhuc b);
	SoPhuc Nhan(SoPhuc b);
	SoPhuc Chia(SoPhuc b);
};


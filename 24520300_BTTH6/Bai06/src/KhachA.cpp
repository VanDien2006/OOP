#include "KhachA.h"
#include "KhachHang.h"
#include<iostream>
using namespace std;

void KhachA::Nhap()
{
    KhachHang::Nhap();
    Tien=SoLuong*DonGia*1.1;
}

void KhachA::Xuat()
{
    KhachHang::Xuat();
}


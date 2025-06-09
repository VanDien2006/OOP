#include "KhachC.h"
#include "KhachHang.h"
#include<iostream>
using namespace std;

void KhachC::Nhap()
{
    KhachHang::Nhap();
    Tien=SoLuong*DonGia*0.5*1.1;
}

void KhachC::Xuat()
{
    KhachHang::Xuat();
}

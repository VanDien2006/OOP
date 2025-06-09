#include "KhachB.h"
#include "KhachHang.h"
#include<iostream>
using namespace std;

void KhachB::Nhap()
{
    KhachHang::Nhap();
    cin>>SoNamThanThiet;
    KhuyenMai=max(SoNamThanThiet*0.05, 0.5);
    Tien=SoLuong*DonGia*(1.0-KhuyenMai)*1.1;
}

void KhachB::Xuat()
{
    KhachHang::Xuat();
}

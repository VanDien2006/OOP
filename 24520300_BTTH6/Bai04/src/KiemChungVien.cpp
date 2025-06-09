#include "KiemChungVien.h"
#include<iostream>
using namespace std;
#include "NhanVien.h"

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout<<"Nhap so loi: "; cin>>SoLoi;
}

void KiemChungVien::Xuat()
{
    NhanVien::Xuat();
    cout<<"\tSo loi: "<<SoLoi<<endl;
}

void KiemChungVien::TinhLuong()
{
    Luong=LuongCB+SoLoi*50;
}

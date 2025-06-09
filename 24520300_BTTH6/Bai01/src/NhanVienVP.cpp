#include "NhanVienVP.h"
#include "NhanVien.h"
#include<iostream>
using namespace std;

void NhanVienVP::Nhap()
{
    type="NhanVienVP";
    NhanVien::Nhap();
    cout<<"Nhap so ngay lam viec: ";
    cin>>SoNgayLamViec;
}

void NhanVienVP::Xuat()
{
    NhanVien::Xuat();
    cout<<"\tSo ngay lam viec: "<<SoNgayLamViec<<endl;
}

void NhanVienVP::TinhLuong()
{
    Luong=SoNgayLamViec*100;
}

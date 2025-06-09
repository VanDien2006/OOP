#include "GDDat.h"
#include<iostream>
using namespace std;

void GDDat::Nhap()
{
    GD::Nhap();
    cout<<"Nhap loai dat (A/B/C): "; cin>>LoaiDat;
}

void GDDat::Xuat()
{
    GD::Xuat();
    cout<<"\tLoaiDat: "<<LoaiDat<<endl;
}

void GDDat::ThanhTien()
{
    if(LoaiDat=="B" || LoaiDat=="C")Tien=DienTich*DonGia;
    else Tien=DienTich*DonGia*1.5;
}


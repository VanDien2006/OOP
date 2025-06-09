#include "GDChungCu.h"
#include<iostream>
using namespace std;

void GDChungCu::Nhap()
{
    GD::Nhap();
    cout<<"Nhap ma tang: "; cin>>MaTang;
    cout<<"Nhap vi tri tang: "; cin>>ViTriTang;
}

void GDChungCu::Xuat()
{
    GD::Xuat();
    cout<<"Ma Tang: "<<MaTang<<"\tVi tri tang: "<<ViTriTang<<endl;
}

void GDChungCu::ThanhTien()
{
    if(ViTriTang==1)Tien=DienTich*DonGia*2;
    else if(ViTriTang>=15)Tien=DienTich*DonGia*1.2;
    else Tien=DienTich*DonGia;
}

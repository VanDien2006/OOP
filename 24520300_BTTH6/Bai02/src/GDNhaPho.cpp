#include "GDNhaPho.h"
#include<iostream>
using namespace std;

void GDNhaPho::Nhap()
{
    GD::Nhap();
    cout<<"Nhap loai nha (caocap/ thuong): "; cin>>LoaiNha;
    cout<<"Nhap dia chi: "; cin>>DiaChi;
}

void GDNhaPho::Xuat()
{
    GD::Xuat();
    cout<<"\tLoaiNha: "<<LoaiNha<<"\tDiaChi: "<<DiaChi<<endl;
}

void GDNhaPho::ThanhTien()
{
    if(LoaiNha=="caocap")Tien=DienTich*DonGia;
    else Tien=DienTich*DonGia*0.9;
}




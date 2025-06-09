#include "NhanVien.h"
#include<iostream>
using namespace std;

void NhanVien::Nhap()
{
    cout<<"Nhap ma nhan vien: "; cin>>MNV;
    cin.ignore();
    cout<<"Nhap ho ten: "; getline(cin, HoTen);
    cout<<"Nhap tuoi: "; cin>>Tuoi;
    cout<<"Nhap so dien thoai: "; cin>>SDT;
    cout<<"Nhap email: "; cin>>email;
    cout<<"Nhap luong co ban: "; cin>>LuongCB;
}
void NhanVien::Xuat()
{
    cout<<MNV<<"\t"<<HoTen<<"\t"<<Tuoi<<"\t"<<SDT<<"\t"<<email<<"tLuong co ban: "<<LuongCB<<"\tLuong: "<<Luong;
}


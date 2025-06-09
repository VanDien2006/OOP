#include "GD.h"
#include<iostream>
using namespace std;

void GD::Nhap()
{
    cout<<"Nhap ma giao dich: "; cin>>MGD;
    cout<<"Nhap ngay thang nam giao dich: "; cin>>ngay>>thang>>nam;
    cout<<"Nhap don gia: "; cin>>DonGia;
    cout<<"Nhap dien tich: "; cin>>DienTich;
}

void GD::Xuat()
{
    cout<<MGD<<"\t"<<ngay<<"/"<<thang<<"/"<<nam<<"\t Don gia: "<<DonGia<<"\t Dien tich: "<<DienTich<<"\t Tien: "<<Tien;
}



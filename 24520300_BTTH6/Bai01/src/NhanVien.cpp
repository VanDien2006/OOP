#include "NhanVien.h"
#include<iostream>
using namespace std;
#include<iomanip>

void NhanVien::Nhap()
{
    cin.ignore();
    cout<<"Nhap ho ten: ";
    getline(cin, HoTen);
    cout<<"Nhap ngay sinh: ";
    cin>>ngay>>thang>>nam;
}

void NhanVien::Xuat()
{
    cout<<HoTen<<"\t"<<setfill('0')<<setw(2)<<ngay<<"/"<<setw(2)<<thang<<"/"<<setw(4)<<nam;
}


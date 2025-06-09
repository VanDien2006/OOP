#include "LapTrinhVien.h"
#include<iostream>
using namespace std;
#include "NhanVien.h"
#include<iomanip>

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout<<"Nhap so gio lam them: "; cin>>Overtime;
}

void LapTrinhVien::Xuat()
{
    NhanVien::Xuat();
    cout<<"\tSo gio lam them: "<<fixed<<setprecision(1)<<Overtime<<endl;
}

void LapTrinhVien::TinhLuong()
{
    Luong=LuongCB+Overtime*200;
}

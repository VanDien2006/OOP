#include "KhachHang.h"
#include<iostream>
using namespace std;
#include<iomanip>

void KhachHang::Nhap()
{
    cin.ignore();
    getline(cin, Ten);
    cin>>SoLuong;
    cin>>DonGia;
}

void KhachHang::Xuat()
{
    cout<<Ten<<endl<<fixed<<setprecision(3)<<Tien<<endl;
}


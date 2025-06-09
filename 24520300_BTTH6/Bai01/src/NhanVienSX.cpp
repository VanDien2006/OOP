#include "NhanVienSX.h"
#include "NhanVien.h"
#include<iomanip>
#include<iostream>
using namespace std;

void NhanVienSX::Nhap()
{
    type="NhanVienSX";
    NhanVien::Nhap();
    cout<<"Nhap luong can ban: ";
    cin>>LuongCanBan;
    cout<<"Nhap so san pham: ";
    cin>>SoSanPham;
}

void NhanVienSX::Xuat()
{
    NhanVien::Xuat();
    cout<<"\tLuong can ban: "<<LuongCanBan<<"\tSo san pham: "<<SoSanPham<<"\tLuong: "<<fixed<<setprecision(3)<<Luong<<endl;
}

void NhanVienSX::TinhLuong()
{
    Luong=LuongCanBan+SoSanPham*5;
}


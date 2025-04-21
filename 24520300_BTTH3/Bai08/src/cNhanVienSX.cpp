#include "cNhanVienSX.h"
#include<iostream>
using namespace std;

cNhanVienSX::cNhanVienSX()
{
    ma=ten="";
    day=month=year=1;
    soSanPham=0;
    donGia=luong=0;
}

cNhanVienSX::~cNhanVienSX(){}

int ngayTrongThang(int thang, int nam)
{
    switch(thang)
    {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if(nam%400==0 || nam%4==0 && nam%100!=0)return 29;
        else return 28;
    default:
        return 31;
    }
}

bool kiemTraNgay(int ngay, int thang, int nam)
{
    if(thang<1 || thang>12 || ngay<1)return false;
    return ngay<=ngayTrongThang(thang, nam);
}

void cNhanVienSX::Nhap()
{
    cout<<"Nhap ma nhan vien: ";
    cin>>ma;
    cin.ignore();
    cout<<"Nhap ten nhan vien: ";
    getline(cin,ten);
    cout<<"Nhap ngay thang nam: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"Ngay thang nam khong hop le! Nhap lai: ";
        cin>>day>>month>>year;
        check=false;
    }while(!kiemTraNgay(day,month,year));
    cout<<"Nhap so san pham: ";
    check=true;
    do
    {
        if(check==false)cout<<"So luong san pham khong hop le! Nhap lai: ";
        cin>>soSanPham;
        check=false;
    }while(soSanPham<0);
    cout<<"Nhap don gia moi san pham: ";
    check=true;
    do
    {
        if(check==false)cout<<"Don gia moi san pham khong hop le! Nhap lai: ";
        cin>>donGia;
        check=false;
    }while(donGia<0);
    luong=soSanPham*donGia;
}

void cNhanVienSX::Xuat()
{
    cout<<ma<<"\t"<<ten<<"\t"<<day<<"/"<<month<<"/"<<year<<"\tso san pham: "<<soSanPham<<"\tdon gia: "<<donGia<<"\tluong: "<<luong<<endl;
}

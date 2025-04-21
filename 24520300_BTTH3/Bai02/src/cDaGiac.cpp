#include "cDaGiac.h"
#include "Diem.h"
#include<iostream>
using namespace std;

cDaGiac::cDaGiac()
{
    this->SoDiem=0;
}

cDaGiac::~cDaGiac()
{
}

void cDaGiac::Nhap()
{
    cout<<"Nhap so dinh cua da giac: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"So dinh khong hop le! Nhap lai: ";
        cin>>this->SoDiem;
        check=false;
    }while(SoDiem<3);
    cout<<"Nhap toa do cac dinh: \n";
    for(int i=0; i<SoDiem; i++)
        DanhSachDiem[i].Nhap();
}

void cDaGiac::Xuat()
{
    cout<<"Toa do cac dinh la: \n";
    for(int i=0; i<SoDiem; i++)
    {
        DanhSachDiem[i].Xuat();
        cout<<endl;
    }
}

void cDaGiac::TinhTien(double x, double y)
{
    for(int i=0; i<SoDiem; i++)
    {
        DanhSachDiem[i].TinhTien(x,y);
    }
}

void cDaGiac::ThuPhong(double scale)
{
    for(int i=0; i<SoDiem; i++)
    {
        DanhSachDiem[i].setdx(DanhSachDiem[i].getdx()*scale);
        DanhSachDiem[i].setdy(DanhSachDiem[i].getdy()*scale);
    }
}

void cDaGiac::Quay(double alpha)
{
    for(int i=0; i<this->SoDiem; i++)
        DanhSachDiem[i].Quay(alpha);
}

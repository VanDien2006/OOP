#include "PhanSo.h"
#include<iostream>
using namespace std;

PhanSo::PhanSo()
{
    this->iTu=this->iMau=0;
}

//PhanSo::PhanSo(int tu, int mau)
//{
//    this->iTu=tu;
//    this->iMau=mau;
//}

PhanSo::~PhanSo()
{
}

int gcd(int a, int b)
{
    if(a<0)a=-a;
    if(b<0)b=-b;
    int temp;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

void PhanSo::Nhap()
{
    bool check=true;
    do
    {
        if(check==false)cout<<"Phan so khong hop le! Nhap lai: ";
        cin>>this->iTu;
        cin>>this->iMau;
        check=false;
    }while(this->iMau==0);
    this->RutGon();
}

void PhanSo::Xuat()
{
    this->RutGon();
    if(iTu==0)cout<<0<<endl;
    else if(iMau==1)cout<<iTu<<endl;
    else cout<<iTu<<"/"<<iMau<<endl;
}

void PhanSo::RutGon()
{
    if(this->iMau<0)
    {
        this->iMau=-this->iMau;
        this->iTu=-this->iTu;
    }
    int ucln=gcd(this->iTu, this->iMau);
    this->iTu/=ucln;
    this->iMau/=ucln;
}

PhanSo Tong(PhanSo a,PhanSo b)
{
    PhanSo temp;
    temp.iTu=a.iTu*b.iMau+a.iMau*b.iTu;
    temp.iMau=a.iMau*b.iMau;
    temp.RutGon();
    return temp;
}

int SoSanh(PhanSo a, PhanSo b)
{
    if(a.iTu*b.iMau>a.iMau*b.iTu)return 1;
    else if(a.iTu*b.iMau==a.iMau*b.iTu)return 0;
    else return -1;
}

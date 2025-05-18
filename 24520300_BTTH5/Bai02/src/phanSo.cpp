#include "phanSo.h"
#include<iostream>
using namespace std;
//===========
istream& operator>>(istream &is, phanSo& a)
{
    bool check=true;
    do
    {
        if(check==false)cout<<"Phan so khong hop le! Nhap lai: ";
        cin>>a.iTu>>a.iMau;
        check=false;
    }
    while(!a.iMau);
}

ostream& operator<<(ostream&, phanSo a)
{
    a.RutGon();
    if(a.iTu==0)cout<<0;
    else if(a.iMau==-1)cout<<-a.iTu;
    else if(a.iMau==1)cout<<a.iTu;
    else if(a.iMau<0)cout<<-a.iTu<<'/'<<-a.iMau;
    else cout<<a.iTu<<'/'<<a.iMau;
}

int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

void phanSo::RutGon()
{
    int ucln=gcd(iTu, iMau);
    iTu/=ucln;
    iMau/=ucln;
}

phanSo operator+ (phanSo a, phanSo b)
{
    phanSo temp;
    temp.iTu=a.iTu*b.iMau+a.iMau*b.iTu;
    temp.iMau=a.iMau*b.iMau;
    return temp;
}

phanSo operator- (phanSo a, phanSo b)
{
    phanSo temp;
    temp.iTu=a.iTu*b.iMau-a.iMau*b.iTu;
    temp.iMau=a.iMau*b.iMau;
    return temp;
}

phanSo operator* (phanSo a, phanSo b)
{
    phanSo temp;
    temp.iTu=a.iTu*b.iTu;
    temp.iMau=a.iMau*b.iMau;
    return temp;
}

phanSo operator/ (phanSo a, phanSo b)
{
    phanSo temp;
    temp.iTu=a.iTu*b.iMau;
    temp.iMau=a.iMau*b.iTu;
    return temp;
}

bool operator== (phanSo a, phanSo b)
{
    if(a.iTu*b.iMau==a.iMau*b.iTu)return true;
    else return false;
}










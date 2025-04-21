/*
Bài tập 1: Viết chương trình nhập vào một phân số, rút gọn
phân số và xuất kết quả.
*/
#include<iostream>
using namespace std;

struct phanSo
{
    int tu;
    int mau;
};

void nhap(phanSo &a)
{
    cin>>a.tu>>a.mau;
}

int gcd(int a, int b)
{
    if(a<0)a=-a;
    if(b<0)b=-b;
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}


void rutGon(phanSo &a)
{
    int ucln=gcd(a.tu, a.mau);
    a.tu/=ucln;
    a.mau/=ucln;
}

void xuatKetQua(phanSo a)
{
    if(a.tu==0)cout<<0;
    else if(a.mau==-1)cout<<-a.tu<<endl;
    else if(a.mau==1)cout<<a.tu<<endl;
    else if(a.mau<0)cout<<-a.tu<<'/'<<-a.mau<<endl;
    else cout<<a.tu<<'/'<<a.mau<<endl;
}

int main()
{
    phanSo a;
    cout<<"Nhap phan so a: ";
    nhap(a);
    bool check=true;
    while(a.mau==0)
    {
        cout<<"mau so khong hop le, nhap lai phan so: ";
        cin>>a.tu>>a.mau;
    }
    rutGon(a);
    xuatKetQua(a);
    return 0;
}


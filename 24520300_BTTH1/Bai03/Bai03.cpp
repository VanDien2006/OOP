/*
Bài tập 3: Viết chương trình nhập vào hai phân số.
Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.
*/

#include<iostream>
using namespace std;

struct phanSo
{
    int tu, mau;
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
    if(a.tu==0)cout<<0<<endl;
    else if(a.mau==-1)cout<<-a.tu<<endl;
    else if(a.mau==1)cout<<a.tu<<endl;
    else if(a.mau<0)cout<<-a.tu<<'/'<<-a.mau<<endl;
    else cout<<a.tu<<'/'<<a.mau<<endl;
}
phanSo operator + (phanSo a, phanSo b)
{
    phanSo temp;
    temp.tu=a.tu*b.mau+a.mau*b.tu;
    temp.mau=a.mau*b.mau;
    return temp;
}
phanSo operator - (phanSo a, phanSo b)
{
    phanSo temp;
    temp.tu=a.tu*b.mau-a.mau*b.tu;
    temp.mau=a.mau*b.mau;
    return temp;
}
phanSo operator * (phanSo a, phanSo b)
{
    phanSo temp;
    temp.tu=a.tu*b.tu;
    temp.mau=a.mau*b.mau;
    return temp;
}
phanSo operator / (phanSo a, phanSo b)
{
    phanSo temp;
    temp.tu=a.tu*b.mau;
    temp.mau=a.mau*b.tu;
    return temp;
}


int main()
{
    phanSo a, b, c;
    cout<<"Nhap phan so a va phan so b: \n";
     bool check=true;

    do
    {
        if(check==false)cout<<"mau so khong hop le, nhap lai 2 phan so: ";
        cin>>a.tu>>a.mau;
        cin>>b.tu>>b.mau;
        check=false;
    }while(a.mau==0 || b.mau==0);
     //tong hai phan so
    c=a+b;
    rutGon(c);
    xuatKetQua(c);
    //hieu hai phan so
    c=a-b;
    rutGon(c);
    xuatKetQua(c);
    //tich hai phan so
    c=a*b;
    rutGon(c);
    xuatKetQua(c);
    //thuong hai phan so
    if(b.tu==0)
    {
        cout<<"khong the chia cho mot phan so co tu bang 0"<<endl;
    }
    else
    {
        c=a/b;
        rutGon(c);
        xuatKetQua(c);
    }
}

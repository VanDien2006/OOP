/*
Bài tập 2: Viết chương trình nhập vào hai phân số,
tìm phân số lớn nhất và xuất kết quả.
*/
#include<iostream>
using namespace std;

struct phanSo
{
    int tu, mau;
};

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

phanSo phanSoLonNhat(phanSo a, phanSo b)
{
    int tuSo=a.tu*b.mau-b.tu*a.mau;
    int mauSo=a.mau*b.mau;
    if(mauSo<0)
    {
        tuSo=-tuSo;
        mauSo=-mauSo;
    }
    if(tuSo>0)return a;
    else return b;
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
    c=phanSoLonNhat(a,b);
    rutGon(c);
    xuatKetQua(c);
    return 0;
}

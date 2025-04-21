#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main()
{
    cDaThuc a, b;
    cout<<"Nhap da thuc a: \n";
    a.Nhap();
    cout<<"Da thuc a: ";
    a.Xuat();
    cout<<"Nhap da thuc b: \n";
    b.Nhap();
    cout<<"Da thuc b: ";
    b.Xuat();

    cout<<"Nhap gia tri x: ";
    int x; cin>>x;
    cout<<"Gia tri cua bieu thuc a(x) la: ";
    cout<<a.function_(x)<<endl;

    cout<<"Tong cua da thuc a va da thuc b la: ";
    a.congDaThuc(b);
    cout<<"Hieu cua da thuc a va da thuc b la: ";
    a.truDaThuc(b);

    return 0;
}

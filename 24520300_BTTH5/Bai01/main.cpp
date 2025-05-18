#include "soPhuc.h"
#include <iostream>

using namespace std;

int main()
{
    soPhuc a, b, c;
    cout<<"Nhap so phuc a: ";
    cin>>a;
    cout<<"Nhap so phuc b: ";
    cin>>b;
    cout<<"Tong a+b=";
    c=a+b;
    cout<<c;
    cout<<"\nHieu a-b=";
    c=a-b;
    cout<<c;
    cout<<"\nTich a*b=";
    c=a*b;
    cout<<c;
    if(b.getiThuc()==0 && b.getiAo()==0)
    {
        cout<<"\nThuong a/b khong xac dinh! Khong the chia cho so phuc (0,0)";
        return 0;
    }
    cout<<"\nThuong a/b=";
    c=a/b;
    cout<<c;
    return 0;
}

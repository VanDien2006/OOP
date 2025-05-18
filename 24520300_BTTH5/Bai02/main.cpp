#include "phanSo.h"
#include <iostream>
using namespace std;

int main()
{
    phanSo a,b,c;
    cout<<"Nhap phan so a: "; cin>>a;
    cout<<"Nhap phan so b: "; cin>>b;
    cout<<"\nPhan so a la: "; cout<<a;
    cout<<"\nPhan so b la: "; cout<<b;
    cout<<"\nTong a+b="; c=a+b; cout<<c;
    cout<<"\nHieu a-b="; c=a-b; cout<<c;
    cout<<"\nTich a*b="; c=a*b; cout<<c;
    if(b.getiTu()==0)cout<<"\nPhep chia khong hop le!"<<endl;
    else
    {
        cout<<"\nThuong a/b="; c=a/b; cout<<c;
    }
    cout<<"\nPhan so a = b: ";
    if(a==b)cout<<"true";
    else cout<<"false";
    return 0;
}

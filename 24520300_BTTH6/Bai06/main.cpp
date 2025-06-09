#include <iostream>
using namespace std;
#include "KhachHang.h"
#include "KhachA.h"
#include "KhachB.h"
#include "KhachC.h"
#include<iomanip>

int main()
{
    freopen("XYZ.INP", "r", stdin);
    freopen("XYZ.OUT", "w", stdout);
    //Nhap
    int x, y, z;
    cin>>x>>y>>z;

    int n=x+y+z;
    KhachHang *p[n];

    for(int i=0; i<n; i++)
    {
        if(i<x)
        {
            p[i]=new KhachA;
            p[i]->Nhap();
        }
        else if(i<x+y)
        {
            p[i]=new KhachB;
            p[i]->Nhap();
        }
        else
        {
            p[i]=new KhachC;
            p[i]->Nhap();
        }
    }

    //Xuat
    cout<<x<<" "<<y<<" "<<z<<endl;
    for(int i=0; i<n; i++)
    {
        p[i]->Xuat();
        cout<<endl;
    }
    long double tong=0;
    for(int i=0; i<n; i++)
    {
        tong+=p[i]->getTien();
    }

    cout<<"Tong so tien cong ty thu duoc: "<<fixed<<setprecision(3)<<tong<<endl;

    for(int i=0; i<n; i++)
    {
        delete p[i];
        p[i]=NULL;
    }
    return 0;
}

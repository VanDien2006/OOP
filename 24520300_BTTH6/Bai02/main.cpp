#include <iostream>
using namespace std;
#include "GD.h"
#include "GDDat.h"
#include "GDNhaPho.h"
#include "GDChungCu.h"

int main()
{
    //Cau 1: Nhap (va thanh tien)
    int n;
    do
    {
        cout<<"Nhap so luong giao dich (tu 1 den 10): ";
        cin>>n;
    }
    while(n<1 || n>10);

    GD *p[n];
    for(int i=0; i<n; i++)
    {
        cout<<"\nNhap lua chon: "<<endl;
        cout<<"1. Giao dich dat."<<endl;
        cout<<"2. Giao dich nha pho."<<endl;
        cout<<"3. Giao dich can ho chung cu."<<endl;
        int LuaChon; cin>>LuaChon;

        if(LuaChon==1)p[i]=new GDDat;
        else if(LuaChon==2)p[i]=new GDNhaPho;
        else p[i]=new GDChungCu;

        p[i]->Nhap();
    }

    for(int i=0; i<n; i++)
    {
        p[i]->ThanhTien();
    }
    //Cau 2: Tong so luong tung loai
    int SoGDDat=0, SoGDNhaPho=0, SoGDChungCu=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="GDDat")SoGDDat++;
        else if(p[i]->getType()=="GDNhaPho")SoGDNhaPho++;
        else SoGDChungCu++;
    }

    //Cau 3: Trung binh tien giao dich chung cu

    double TongTienChungCu=0;
    bool check=false;

    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="GDChungCu")
        {
            check=true;
            TongTienChungCu+=p[i]->getTien();
        }
    }

    if(check==false)cout<<"Khong co giao dich can ho chung cu!"<<endl;
    else cout<<"Trung binh thanh tien cua giao dich can ho chung cu la: "<<TongTienChungCu/SoGDChungCu<<endl;

    //Cau 4: Giao dich nha pho co tien cao nhat
    double max=-1;
    check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="GDNhaPho")
        {
            check=true;
            if(max<p[i]->getTien())max=p[i]->getTien();
        }
    }
    if(check==false)cout<<"Khong co giao dich nha pho!"<<endl;
    else
    {
        cout<<"Danh sach giao dich nha pho co gia tri cao nhat la\n";
        for(int i=0; i<n; i++)
        {
            if(p[i]->getType()=="GDNhaPho")
                p[i]->Xuat();
        }
    }
    //Cau 5: Giao dich thang 12 nam 2024
    check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getThang()==12 && p[i]->getNam()==2024)
        {
            check=true;
            p[i]->Xuat();
        }
    }
    if(check==false)cout<<"Khong co giao dich cua thang 12 nam 2024!"<<endl;
    return 0;
}

/*
4
1
GD001
1 12 2024
100
50
A
2
GD002
2 12 2024
200
100
thuong
Q1
2
GD003
3 5 2024
300
200
caocap
Q3
3
GD004
4 12 2024
400
70
A1
1
*/

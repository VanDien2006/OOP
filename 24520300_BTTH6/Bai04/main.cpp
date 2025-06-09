#include <iostream>
using namespace std;
#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

int main()
{
    //Cau a: Nhap (va tinh luong)
    int n;
    do
    {
        cout<<"Nhap so luong nhan vien (tu 1 den 10): "; cin>>n;
    }
    while(n<1 || n>10);

    NhanVien *p[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap lua chon: "<<endl;
        cout<<"1. Lap trinh vien."<<endl;
        cout<<"2. Kiem chung vien."<<endl;
        int LuaChon; cin>>LuaChon;

        if(LuaChon==1)
            p[i]=new LapTrinhVien;
        else
            p[i]=new KiemChungVien;

        p[i]->Nhap();
    }

    for(int i=0; i<n; i++)
    {
        p[i]->TinhLuong();
    }
    //Cau b: Xuat
    for(int i=0; i<n; i++)
    {
        p[i]->Xuat();
    }
    //Cau c: Xuat danh sac nhan vien co luong thap hon muc luong trung binh
    cout<<"Danh sach nhan vien co luong thap hon muc luong trung binh\n";
    double TongLuong=0;
    double LuongTB=0;
    for(int i=0; i<n; i++)
    {
        TongLuong+=p[i]->getLuong();
    }
    LuongTB=TongLuong/n;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getLuong() < LuongTB)
            p[i]->Xuat();
    }
    //Cau d: Xuat nhan vien luong cao nhat
    double max=0;
    for(int i=0; i<n; i++)
    {
        if(max<p[i]->getLuong())
            max=p[i]->getLuong();
    }
    cout<<"Danh sach nhan vien co luong cao nhat la\n";
    for(int i=0; i<n; i++)
    {
        if(max==p[i]->getLuong())
            p[i]->Xuat();
    }
    //Cau e: Xuat nhan vien luong thap nhat
    double min=p[0]->getLuong();
    for(int i=0; i<n; i++)
    {
        if(min>p[i]->getLuong())
            min=p[i]->getLuong();
    }
    cout<<"Danh sach nhan vien co luong thap nhat la\n";
    for(int i=0; i<n; i++)
    {
        if(min==p[i]->getLuong())
            p[i]->Xuat();
    }
    //Cau f: Lap trinh vien luong cao nhat
    max=0;
    bool check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="LapTrinhVien")
        {
            check=true;
            if(max<p[i]->getLuong())
            {
                max=p[i]->getLuong();
            }
        }
    }
    if(check==false)cout<<"Khong co lap trinh vien!"<<endl;
    else
    {
        cout<<"Danh sach lap trinh vien co luong cao nhat la"<<endl;
        for(int i=0; i<n; i++)
        {
            if(max==p[i]->getLuong() && p[i]->getType()=="LapTrinhVien")
                p[i]->Xuat();
        }
    }
    //Cau g: Kiem chung vien luong thap nhat
    min=1000000000;
    check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="KiemChungVien")
        {
            check=true;
            if(min>p[i]->getLuong())
            {
                min=p[i]->getLuong();
            }
        }
    }
    if(check==false)cout<<"Khong co kiem chung vien!"<<endl;
    else
    {
        cout<<"Danh sach kiem chung vien co luong cao nhat la"<<endl;
        for(int i=0; i<n; i++)
        {
            if(min==p[i]->getLuong() && p[i]->getType()=="KiemChungVien")
                p[i]->Xuat();
        }
    }
    //Giai phong bo nho
    for(int i=0; i<n; i++)
    {
        delete p[i];
        p[i]=NULL;
    }
    return 0;
}

/*
4
1
LTV01
Nguyen Van A
25
0123456789
a@gmail.com
500
10
1
LTV02
Tran Van B
30
0987654321
b@gmail.com
700
5
2
KCV01
Le Thi C
28
0111222333
c@gmail.com
450
40
2
KCV02
Pham Thi D
26
0999888777
d@gmail.com
400
10
*/








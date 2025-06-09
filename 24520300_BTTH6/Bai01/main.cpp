#include <iostream>
#include "NhanVien.h"
using namespace std;
#include "NhanVienSX.h"
#include "NhanVienVP.h"

int main()
{
    //Cau 1: nhap
    int n;
    do
    {
        cout<<"Nhap so luong nhan vien (tu 1 den 10): ";
        cin>>n;
    }
    while(n<1 || n>10);
    NhanVien *p[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Lua chon nhan vien: "<<endl;
        cout<<"1. Nhan vien san xuat"<<endl;
        cout<<"2. Nhan vien van phong"<<endl;
        int LuaChon;
        cin>>LuaChon;
        if(LuaChon==1)
        {
            p[i]=new NhanVienSX;
        }
        else if(LuaChon==2)
        {
            p[i]=new NhanVienVP;
        }
        cout<<"Nhap nhan vien thu "<<i<<"\n";
        p[i]->Nhap();
    }

    //Cau2: tinh luong
    for(int i=0; i<n; i++)
    {
        p[i]->TinhLuong();
    }

    //Cau3: xuat
    cout<<"Thong tin danh sach "<<n<<" nhan vien\n";
    for(int i=0; i<n; i++)
    {
        p[i]->Xuat();
    }

    //Cau4: tong luong
    double TongLuong=0;
    for(int i=0; i<n; i++)
    {
        TongLuong+=p[i]->getLuong();
    }
    cout<<"Tong luong cua cac nhan vien la: "<<TongLuong<<endl;

    //Cau 5: NhanVienSX co luong thap nhat
    double LuongThapNhat=1000000000;
    bool check=false;
    for(int i=0; i<n; i++)
    {
        if( (LuongThapNhat > p[i]->getLuong()) && p[i]->gettype()=="NhanVienSX")
        {
            LuongThapNhat=p[i]->getLuong();
            check=true;
        }
    }
    if(check==false)cout<<"Khong co nhan vien san xuat!"<<endl;
    else
    {
        cout<<"Danh sach nhan vien san xuat co luong thap nhat la: \n";
        for(int i=0; i<n; i++)
        {
            if(LuongThapNhat == p[i]->getLuong())
                p[i]->Xuat();
        }
    }

    //Cau 6: NhanVienVP co tuoi cao nhat
    double NamSinhThapNhat=3000;
    check=false;
    for(int i=0; i<n; i++)
    {
        if( (NamSinhThapNhat > p[i]->getNamSinh()) && p[i]->gettype()=="NhanVienVP")
        {
            NamSinhThapNhat=p[i]->getNamSinh();
            check=true;
        }
    }
    if(check==false)cout<<"Khong co nhan vien van phong!"<<endl;
    else
    {
        cout<<"Danh sach nhan vien van phong co tuoi cao nhat la: \n";
        for(int i=0; i<n; i++)
        {
            if(NamSinhThapNhat == p[i]->getNamSinh())
                p[i]->Xuat();
        }
    }
    //Giai phong bo nho
    for(int i=0; i<n; i++)
    {
        delete p[i];//dung toan tu new cho tung doi tuong nen xoa cung phai xoa tung doi tuong
        p[i]=NULL;
    }
    return 0;
}


/*
3
1
Nguyen Van A
1 1 1990
500
50
2
Tran Thi B
15 5 1985
22
1
Le Van C
10 10 1995
700
10
*/

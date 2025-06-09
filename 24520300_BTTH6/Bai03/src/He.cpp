#include "He.h"
#include<iostream>
using namespace std;

void He::Nhap()
{
    cout<<"Nhap MSSV: "; cin>>MSSV;
    cin.ignore();
    cout<<"Nhap ho ten: "; getline(cin, HoTen);
    cout<<"Nhap dia chi: "; getline(cin,DiaChi);
    cout<<"Nhap tong so tin chi: "; cin>>TongTC;
    cout<<"Nhap diem trung binh: "; cin>>DTB;
}

void He::Xuat()
{
    cout<<MSSV<<"\t"<<HoTen<<"\t"<<DiaChi<<"\tTong so tin chi: "<<TongTC<<"\tDiem trung binh: "<<DTB;
}


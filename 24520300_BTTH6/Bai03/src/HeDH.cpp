#include "HeDH.h"
#include<iostream>
using namespace std;
#include "He.h"

void HeDH::Nhap()
{
    He::Nhap();
    cout<<"Nhap ten luan van: "; cin>>TenLV;
    cout<<"Nhap diem luan van: "; cin>>DLV;
}

void HeDH::Xuat()
{
    He::Xuat();
    cout<<"\tTen luan van: "<<TenLV<<"\tDiem luan van: "<<DLV<<endl;
}

bool HeDH::DuDieuKien()
{
    return (getTongTC()>=170 && getDTB()>=5 && getDLV()>=5);
}

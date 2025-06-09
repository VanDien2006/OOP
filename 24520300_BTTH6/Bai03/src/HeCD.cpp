#include "HeCD.h"
#include<iostream>
using namespace std;
#include "He.h"

void HeCD::Nhap()
{
    He::Nhap();
    cout<<"Nhap diem tot nghiep: "; cin>>DTN;
}

void HeCD::Xuat()
{
    He::Xuat();
    cout<<"\tDiem tot nghiep: "<<DTN<<endl;
}

bool HeCD::DuDieuKien()
{
    return (getTongTC()>=120 && getDTB()>=5 && getDTN()>=5);
}

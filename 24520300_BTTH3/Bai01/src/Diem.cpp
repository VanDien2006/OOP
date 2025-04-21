#include "Diem.h"
#include<iostream>
using namespace std;
#include<math.h>
#include<iomanip>

Diem::Diem()
{
}

Diem::Diem(double x=0, double y=0)
{
    dx=x;
    dy=y;
}

Diem::~Diem()
{

}

void Diem::Nhap()
{
    cin>>dx>>dy;
}

void Diem::Xuat()
{
    cout<<fixed<<setprecision(2)<<"("<<dx<<", "<<dy<<")";
}

void Diem::TinhTien(double x, double y)
{
    dx+=x;
    dy+=y;
}

void Diem::Quay(double alpha)
{
    alpha=alpha*3.1416/180;
    double x_new=dx*cos(alpha)-dy*sin(alpha);
    double y_new=dx*sin(alpha)+dy*cos(alpha);
    dx=x_new;
    dy=y_new;
}



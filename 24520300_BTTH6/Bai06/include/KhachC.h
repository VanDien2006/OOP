#ifndef KHACHC_H
#define KHACHC_H
#include "KhachHang.h"
#include<iostream>
using namespace std;

class KhachC: public KhachHang
{
public:
    ~KhachC(){}
    void Nhap();
    void Xuat();
    string getType(){return "KhachC";}
};

#endif // KHACHC_H

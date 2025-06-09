#ifndef KHACHB_H
#define KHACHB_H
#include "KhachHang.h"
#include<iostream>
using namespace std;

class KhachB: public KhachHang
{
private:
    int SoNamThanThiet;
    double KhuyenMai;
public:
    ~KhachB(){}
    void Nhap();
    void Xuat();
    string getType(){return "KhachB";}
};

#endif // KHACHB_H

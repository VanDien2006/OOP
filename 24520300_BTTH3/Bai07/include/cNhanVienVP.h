#ifndef CNHANVIENVP_H
#define CNHANVIENVP_H
#include<iostream>
using namespace std;

class cNhanVienVP
{
protected:
    string ma, ten;
    int day, month, year;
    double luong;
public:
    cNhanVienVP();
    ~cNhanVienVP();
    void Nhap();
    void Xuat();
    double getLuong(){return this->luong;}
    int getTuoi(){return 2025-year;}
};

#endif // CNHANVIENVP_H

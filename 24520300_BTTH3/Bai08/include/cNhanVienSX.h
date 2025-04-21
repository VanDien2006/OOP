#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include<iostream>
using namespace std;

class cNhanVienSX
{
protected:
    string ma, ten;
    int day, month, year;
    int soSanPham;
    double donGia;
    double luong;
public:
    cNhanVienSX();
    ~cNhanVienSX();
    void Nhap();
    void Xuat();
    double getLuong(){return this->luong;}
    int getTuoi(){return 2025-year;}
};

#endif // CNHANVIENSX_H

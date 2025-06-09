#ifndef NHANVIENVP_H
#define NHANVIENVP_H
#include<iostream>
using namespace std;
#include "NhanVien.h"

class NhanVienVP: public NhanVien
{
private:
    int SoNgayLamViec;
public:
    void Nhap();
    void Xuat();
    void TinhLuong();
    string gettype(){return type;}
    ~NhanVienVP(){}
};

#endif // NHANVIENVP_H

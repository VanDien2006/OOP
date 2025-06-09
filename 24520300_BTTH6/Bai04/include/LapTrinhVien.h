#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H
#include<iostream>
using namespace std;
#include "NhanVien.h"

class LapTrinhVien: public NhanVien
{
private:
    double Overtime;
public:
    ~LapTrinhVien(){}
    void Nhap();
    void Xuat();
    void TinhLuong();
    string getType(){return "LapTrinhVien";}
};

#endif // LAPTRINHVIEN_H

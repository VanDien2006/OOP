#ifndef KIEMCHUNGVIEN_H
#define KIEMCHUNGVIEN_H
#include<iostream>
using namespace std;
#include "NhanVien.h"

class KiemChungVien: public NhanVien
{
private:
    int SoLoi;
public:
    ~KiemChungVien(){}
    void Nhap();
    void Xuat();
    void TinhLuong();
    string getType(){return "KiemChungVien";}
};

#endif // KIEMCHUNGVIEN_H

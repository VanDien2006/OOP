#ifndef NHANVIEN_H
#define NHANVIEN_H
#include<iostream>
using namespace std;

class NhanVien
{
protected:
    string MNV;
    string HoTen;
    int Tuoi;
    string SDT;
    string email;
    double LuongCB;
    double Luong;
public:
    ~NhanVien(){}
    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhLuong()=0;
    virtual string getType()=0;//typeid(*p[i]).name();
    double getLuong(){return Luong;}
};

#endif // NHANVIEN_H

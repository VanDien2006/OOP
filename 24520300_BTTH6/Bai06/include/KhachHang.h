#ifndef KHACHHANG_H
#define KHACHHANG_H
#include<iostream>
using namespace std;

class KhachHang
{
protected:
    string Ten;
    int SoLuong;
    double DonGia;
    double Tien;
public:
    virtual ~KhachHang(){}
    virtual void Nhap();
    virtual void Xuat();
    virtual string getType()=0;
    double getTien(){return Tien;}
};

#endif // KHACHHANG_H

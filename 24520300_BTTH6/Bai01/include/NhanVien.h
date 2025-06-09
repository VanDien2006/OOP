#ifndef NHANVIEN_H
#define NHANVIEN_H
#include<iostream>
using namespace std;

class NhanVien
{
protected:
    string HoTen;
    int ngay, thang, nam;
    double Luong;
    string type;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhLuong()=0;
    double getLuong(){return Luong;}
    int getNamSinh(){return nam;}
    virtual string gettype()=0;
    virtual ~NhanVien(){}
};

#endif // NHANVIEN_H

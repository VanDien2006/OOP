#ifndef GDNHAPHO_H
#define GDNHAPHO_H
#include<iostream>
using namespace std;
#include "GD.h"

class GDNhaPho: public GD
{
private:
    string LoaiNha;
    string DiaChi;
public:
    void Nhap();
    void Xuat();
    void ThanhTien();
    string getType(){return "GDNhaPho";};
    ~GDNhaPho(){}
};

#endif // GDNHAPHO_H

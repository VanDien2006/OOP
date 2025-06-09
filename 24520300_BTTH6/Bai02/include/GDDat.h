#ifndef GDDAT_H
#define GDDAT_H
#include<iostream>
using namespace std;
#include "GD.h"

class GDDat: public GD
{
private:
    string LoaiDat;
public:
    void Nhap();
    void Xuat();
    void ThanhTien();
    string getType(){return "GDDat";};
    ~GDDat(){}
};

#endif // GDDAT_H

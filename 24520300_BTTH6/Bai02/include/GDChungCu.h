#ifndef GDCHUNGCU_H
#define GDCHUNGCU_H
#include<iostream>
using namespace std;
#include "GD.h"

class GDChungCu: public GD
{
private:
    string MaTang;
    int ViTriTang;
public:
    void Nhap();
    void Xuat();
    void ThanhTien();
    string getType(){return "GDChungCu";};
    ~GDChungCu(){}
};

#endif // GDCHUNGCU_H

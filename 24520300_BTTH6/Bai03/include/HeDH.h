#ifndef HEDH_H
#define HEDH_H
#include<iostream>
using namespace std;
#include "He.h"

class HeDH: public He
{
private:
    string TenLV;
    double DLV;
public:
    ~HeDH(){}
    void Nhap();
    void Xuat();
    double getDLV(){return DLV;}
    string getType(){return "HeDH";}
    bool DuDieuKien();
};

#endif // HEDH_H

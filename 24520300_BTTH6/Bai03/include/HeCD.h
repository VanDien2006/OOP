#ifndef HECD_H
#define HECD_H
#include<iostream>
using namespace std;
#include "He.h"

class HeCD: public He
{
private:
    double DTN;
public:
    ~HeCD(){}
    void Nhap();
    void Xuat();
    double getDTN(){return DTN;}
    string getType(){return "HeCD";}
    bool DuDieuKien();
};

#endif // HECD_H

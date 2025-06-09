#ifndef HE_H
#define HE_H
#include<iostream>
using namespace std;

class He
{
protected:
    string MSSV;
    string HoTen;
    string DiaChi;
    int TongTC;
    double DTB;
public:
    ~He(){}
    virtual void Nhap();
    virtual void Xuat();
    virtual string getType()=0;
    int getTongTC(){return TongTC;}
    double getDTB(){return DTB;}
    virtual bool DuDieuKien()=0;
};

#endif // HE_H

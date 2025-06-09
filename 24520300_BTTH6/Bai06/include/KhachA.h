#ifndef KHACHA_H
#define KHACHA_H
#include "KhachHang.h"
#include<iostream>
using namespace std;

class KhachA: public KhachHang
{
public:
    ~KhachA(){}
    void Nhap();
    void Xuat();
    string getType(){return "KhachA";}
};

#endif // KHACHA_H

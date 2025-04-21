#ifndef TAMGIAC_H
#define TAMGIAC_H
#include "Diem.h"
#include<iostream>
using namespace std;
#include<math.h>

class TamGiac: public Diem
{
private:
    Diem A,B,C;
public:
    TamGiac();
    TamGiac(Diem, Diem, Diem);
    ~TamGiac();
    void Nhap();
    void Xuat();
    double getAB()
    {
        double AB=sqrt(pow((B.getdx()-A.getdx()),2)+pow((B.getdy()-A.getdy()),2));
        return AB;
    }
    double getBC()
    {
        double BC=sqrt(pow((C.getdx()-B.getdx()),2)+pow((C.getdy()-B.getdy()),2));
        return BC;
    }
    double getAC()
    {
        double AC=sqrt(pow((C.getdx()-A.getdx()),2)+pow((C.getdy()-A.getdy()),2));
        return AC;
    }
    friend bool ganBang(double, double);
    string PhanLoai();
    double TinhChuVi();
    double TinhDienTich();
    void TinhTien(double x, double y);
    void ThuPhong(double scale);
    void Quay(double alpha);
};

#endif // TAMGIAC_H

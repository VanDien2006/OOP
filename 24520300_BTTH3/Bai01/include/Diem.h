#ifndef DIEM_H
#define DIEM_H


class Diem
{
protected:
    double dx, dy;
public:
    //constructor, destructor, nhap, xuat
    Diem();
    Diem(double, double);
    ~Diem();
    void Nhap();
    void Xuat();
    //tinh tien, quay
    void TinhTien(double x, double y);
    void Quay(double alpha);
    //get, set
    double getdx(){return this->dx;}
    double getdy(){return this->dy;}
    void setdx(double x){dx=x;}
    void setdy(double y){dy=y;}
};

#endif // DIEM_H

#ifndef CDAGIAC_H
#define CDAGIAC_H
#include "Diem.h"

class cDaGiac
{
private:
    int SoDiem;
    Diem *DanhSachDiem=new Diem [SoDiem];
public:
    cDaGiac();
    ~cDaGiac();
    void Nhap();
    void Xuat();
    void TinhTien(double x, double y);
    void ThuPhong(double scale);
    void Quay(double alpha);
};

#endif // CDAGIAC_H

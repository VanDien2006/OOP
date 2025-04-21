#ifndef CLISTNHANVIENVP_H
#define CLISTNHANVIENVP_H
#include "cNhanVienVP.h"

class cListNhanVienVP
{
private:
    int n;
    cNhanVienVP *nhanVien=new cNhanVienVP[n];
public:
    cListNhanVienVP();
    ~cListNhanVienVP();
    void Nhap();
    void Xuat();
    void nhanVienLuongCaoNhat();
    double tongLuong();
    void nhanVienTuoiCaoNhat();
    void sapXepTangDan();
};

#endif // CLISTNHANVIENVP_H

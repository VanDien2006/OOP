#ifndef CLISTNHANVIENSX_H
#define CLISTNHANVIENSX_H
#include "cNhanVienSX.h"

class cListNhanVienSX
{
private:
    int n;
    cNhanVienSX *nhanVien=new cNhanVienSX[n];
public:
    cListNhanVienSX();
    ~cListNhanVienSX();
    void Nhap();
    void Xuat();
    void nhanVienLuongThapNhat();
    double tongLuong();
    void nhanVienTuoiCaoNhat();
    void sapXepTangDan();
};

#endif // CLISTNHANVIENVP_H

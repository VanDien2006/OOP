#ifndef CDSPHANSO_H
#define CDSPHANSO_H
#include "PhanSo.h"

class cDSPhanSo
{
private:
    int SoLuong;
    PhanSo *DanhSachPhanSo=new PhanSo[SoLuong];
public:
    cDSPhanSo();
    ~cDSPhanSo();
    void Nhap();
    void Xuat();
    void TongCacPhanSo();
    void PhanSoLonNhat();
    void PhanSoNhoNhat();
    void PhanSoCoTuLaSoNguyenToLonNhat();
    void SapXepDanhSachPhanSoTangDan();
    void SapXepDanhSachPhanSoGiamDan();
    friend bool soNguyenTo(int);
};

#endif // CDSPHANSO_H

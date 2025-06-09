#ifndef NHANVIENSX_H
#define NHANVIENSX_H
#include "NhanVien.h"

class NhanVienSX: public NhanVien
{
private:
    double LuongCanBan;
    int SoSanPham;
    string type;
public:
    void Nhap();
    void Xuat();
    void TinhLuong();
    string gettype(){return type;}
    ~NhanVienSX(){}
};

#endif // NHANVIENSX_H

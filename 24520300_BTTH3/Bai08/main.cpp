#include <iostream>
#include "cListNhanVienSX.h"
using namespace std;

int main()
{
    cListNhanVienSX p;
    p.Nhap();
    cout<<"Danh sach nhan vien: \n";
    p.Xuat();
    p.nhanVienLuongThapNhat();
    cout<<"Tong luong cua cac nhan vien la: "<<p.tongLuong()<<endl;
    p.nhanVienTuoiCaoNhat();
    cout<<"Danh sach nhan vien sau khi sap xep tang dan theo luong: \n";
    p.sapXepTangDan();
    p.Xuat();
    return 0;
}

#include <iostream>
#include "cListNhanVienVP.h"
using namespace std;

int main()
{
    cListNhanVienVP p;
    bool kiemTra=true;
    p.Nhap();
    cout<<"Danh sach nhan vien: \n";
    p.Xuat();
    p.nhanVienLuongCaoNhat();
    cout<<"Tong luong cua cac nhan vien la: "<<p.tongLuong()<<endl;
    p.nhanVienTuoiCaoNhat();
    cout<<"Danh sach nhan vien sau khi sap xep tang dan theo luong: \n";
    p.sapXepTangDan();
    p.Xuat();
    return 0;
}

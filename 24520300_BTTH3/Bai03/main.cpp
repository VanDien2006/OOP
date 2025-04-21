#include "cDSPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
    cDSPhanSo a;
    a.Nhap();
    cout<<"Danh sach phan so: \n";
    a.Xuat();
    a.TongCacPhanSo();
    a.PhanSoLonNhat();
    a.PhanSoNhoNhat();
    a.PhanSoCoTuLaSoNguyenToLonNhat();
    cout<<"Danh sach phan so tang dan: \n";
    a.SapXepDanhSachPhanSoTangDan();
    a.Xuat();
    cout<<"Danh sach phan so giam dan: \n";
    a.SapXepDanhSachPhanSoGiamDan();
    a.Xuat();
    return 0;
}


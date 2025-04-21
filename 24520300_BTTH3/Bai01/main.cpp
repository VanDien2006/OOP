#include <iostream>
#include "TamGiac.h"
using namespace std;
#define PI 3.1416

int main()
{
    TamGiac T;
    int check=0;
    double scale=0;//ti le thu phong  tam giac
    double x=0, y=0;//toa do vecto tinh tien
    double alpha=0;//goc cua phep quay

    T.Nhap();
    T.Xuat();
    cout<<"Tam giac ABC la: "<<T.PhanLoai()<<endl;

    cout<<"Chu vi tam giac ABC la: "<<T.TinhChuVi()<<endl;
    cout<<"Dien tich tam giac ABC la: "<<T.TinhDienTich()<<endl;

    cout<<"Nhap toa do vecto: "; cin>>x>>y;
    cout<<"Tam giac ABC sau khi tinh tien theo vecto do: \n";
    T.TinhTien(x, y);
    T.Xuat();

    cout<<"Nhap ti le can thu phong: "; cin>>scale;
    cout<<"Tam giac ABC sau khi thu phong: \n";
    T.ThuPhong(scale);
    T.Xuat();

    cout<<"Nhap goc cua phep quay(do): "; cin>>alpha;
    cout<<"Tam giac ABC sau khi thuc hien phep quay theo goc alpha: \n";
    T.Quay(alpha);
    T.Xuat();

    return 0;
}

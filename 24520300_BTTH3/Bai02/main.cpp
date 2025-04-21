#include <iostream>
#include "cDaGiac.h"
using namespace std;

int main()
{
    cDaGiac T;
    int check=0;
    double scale=0;//ti le thu phong  da giac
    double x=0, y=0;//toa do vecto tinh tien
    double alpha=0;//goc cua phep quay

    T.Nhap();
    T.Xuat();

    cout<<"Nhap toa do vecto: "; cin>>x>>y;
    cout<<"Da giac sau khi tinh tien theo vecto do: \n";
    T.TinhTien(x, y);
    T.Xuat();

    cout<<"Nhap ti le can thu phong: "; cin>>scale;
    cout<<"Da giac sau khi thu phong: \n";
    T.ThuPhong(scale);
    T.Xuat();

    cout<<"Nhap goc cua phep quay(do): "; cin>>alpha;
    cout<<"Da giac sau khi thuc hien phep quay theo goc alpha: \n";
    T.Quay(alpha);
    T.Xuat();

    return 0;
}

#include <iostream>
#include "cArray.h"

using namespace std;

int main()
{
    cArray p;
    p.Nhap();
    cout<<"Danh sach mang la: \n";
    p.Xuat();

    cout<<"Nhap x: "; int x; cin>>x;
    cout<<"So lan xuat hien cua gia tri x trong mang la: "<<p.count_x(x)<<endl;

    cout<<"Kiem tra cac phan tu trong mang tang dan: "<<boolalpha<<p.is_ascending_array()<<endl;

    int min_odd=p.find_the_smallest_odd_number();
    if(min_odd==INT_MAX)
        cout<<"Khong tim thay phan tu le trong mang!"<<endl;
    else
        cout<<"Phan tu le nho nhat trong mang la: "<<min_odd<<endl;

    int max_prime=p.find_largest_prime_number();
    if(max_prime==INT_MIN)
        cout<<"Khong tim thay phan tu nguyen to trong mang!"<<endl;
    else
        cout<<"Phan tu nguyen to lon nhat trong mang la: "<<max_prime<<endl;

    cout<<"Danh sach mang sau khi sap xep tang dan: \n";
    p.ascending_sort();
    p.Xuat();

    cout<<"Danh sach mang sau khi sap xep giam dan: \n";
    p.descending_sort();
    p.Xuat();

    return 0;
}

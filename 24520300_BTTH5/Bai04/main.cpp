#include "CDate.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Nhap ngay thang nam: "; CDate d; cin>>d;
    cout<<"Ngay thang nam vua nhap: "; cout<<d<<endl;

    cout<<"Nhap so ngay: "; int n; cin>>n;
    cout<<"Ngay thang nam sau khi cong them "<<n<<" ngay la: ";
    d=d+n; cout<<d<<endl;
    cout<<"Nhap so ngay: "; cin>>n;
    cout<<"Ngay thang nam sau khi tru di "<<n<<" ngay la: ";
    d=d-n; cout<<d<<endl;

    cout<<"Tang ngay thang nam them 1 ngay: ";
    d++; cout<<d<<endl;
    cout<<"Giam ngay thang nam di 1 ngay: ";
    d--; cout<<d<<endl;

    cout<<"Nhap ngay thang nam tiep theo: "; CDate d2; cin>>d2;
    cout<<"Ngay thang nam vua nhap: "; cout<<d2<<endl;

    cout<<"Khoang cach giua hai ngay la: "<<distance(d,d2)<<endl;
    return 0;
}
//

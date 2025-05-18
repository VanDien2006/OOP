#include "CTime.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Nhap thoi gian: "; CTime t; cin>>t;
    cout<<"Thoi gian vua nhap: "; cout<<t<<endl;

    cout<<"Nhap so giay: "; int n; cin>>n;
    cout<<"Thoi gian sau khi cong them n giay la: ";
    t=t+n; cout<<t<<endl;
    cout<<"Thoi gian sau khi tru di n giay la: ";
    t=t-n; cout<<t<<endl;

    cout<<"Tang thoi gian them 1 giay: ";
    t++; cout<<t<<endl;
    cout<<"Giam thoi gian di 1 giay: ";
    t--; cout<<t<<endl;

    return 0;
}

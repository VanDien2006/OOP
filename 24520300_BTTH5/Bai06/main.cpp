#include "CVector.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Nhap so chieu: "; int k; cin>>k;
    CVector::setn(k);

    CVector a, b;
    cout<<"Nhap vector a: "; cin>>a;
    cout<<"Nhap vector b: "; cin>>b;
    cout<<"Vector a: "<<a<<endl;
    cout<<"Vector b: "<<b<<endl;
    cout<<"Tong vector a va b: "<<a+b<<endl;
    cout<<"Hieu vector a va b: "<<a-b<<endl;
    return 0;
}

#include <iostream>
#include "CMatrix.h"
using namespace std;

int main()
{
    cout<<"Nhap so hang va so cot cho ma tran a: "; int m,n; cin>>m>>n;
    CMatrix a(m,n);
    cout<<"Nhap ma tran a: \n";
    cin>>a; cout<<endl;
    cout<<"Nhap so hang va so cot cho ma tran b: "; cin>>m>>n;
    CMatrix b(m,n);
    cout<<"Nhap ma tran b: \n";
    cin>>b; cout<<endl;
    cout<<"Ma tran a: \n"<<a<<endl;
    cout<<"Ma tran b: \n"<<b<<endl;
    if(a.getCols()!=b.getRows())
        cout<<"Ma tran a va b khong nhan duoc!"<<endl;
    else
        cout<<"Tich cua ma tran a va ma tran b: \n"<<a*b<<endl;
    cout<<"Nhap vector v (nhap "<<a.getCols()<<" so): ";
    int v[a.getCols()];
    for(int i=0; i<a.getCols(); i++)
        cin>>v[i];
    cout<<"Tich cua ma tran a va vector v: \n"<<a*v<<endl;
    return 0;
}

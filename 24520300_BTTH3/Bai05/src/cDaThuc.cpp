#include "cDaThuc.h"
#include<iostream>
using namespace std;
#include<math.h>

cDaThuc::cDaThuc()
{
    this->n=0;
}

cDaThuc::~cDaThuc(){}

void cDaThuc::Nhap()
{
    cout<<"Nhap bac cua da thuc: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"Bac cua da thuc khong hop le! Nhap lai: ";
        cin>>this->n;
        check=false;
    }while(this->n<0);
    cout<<"Nhap cac he so cua da thuc: ";
    for(int i=n; i>=0; i--)
        cin>>heSo[i];
}

void cDaThuc::Xuat()
{
    if(n==0)
    {
        cout<<heSo[0]<<endl;
        return;
    }
    for(int i=n; i>=0; i--)
    {
        if(heSo[i]==0)continue;
        else if(heSo[i]>0 && i!=n)
            cout<<"+";

        if(heSo[i]!=0 && i==1)
            cout<<heSo[i]<<"x";
        else if(heSo[i]!=0 && i==0)
            cout<<heSo[i];
        else
            cout<<heSo[i]<<"x^"<<i;
    }
    cout<<endl;
}

void cDaThuc::setn(int soMu)
{
    this->n=soMu;
}

double cDaThuc::function_(double x)
{
    double result=0;
    for(int i=n; i>=0; i--)
    {
        result+=heSo[i]*pow(x,i);
    }
    return result;
}

void cDaThuc::congDaThuc(cDaThuc another)
{
    cDaThuc result;
    int a, b;//luu he so cua da thuc 1 va 2
    result.setn( (this->getn()>=another.getn()) ? this->getn() : another.getn() );
    for(int i=result.n; i>=0; i--)
    {
        a=(this->n>=i)?this->heSo[i]:0;
        b=(another.n>=i)?another.heSo[i]:0;
        result.heSo[i]=a+b;
    }
    result.Xuat();
    delete []result.heSo;
}

void cDaThuc::truDaThuc(cDaThuc another)
{
    cDaThuc result;
    int a, b;//luu he so cua da thuc 1 va 2
    result.setn( (this->getn()>=another.getn()) ? this->getn() : another.getn() );
    for(int i=result.n; i>=0; i--)
    {
        a=(this->n>=i)?this->heSo[i]:0;
        b=(another.n>=i)?another.heSo[i]:0;
        result.heSo[i]=a-b;
    }
    result.Xuat();
    delete []result.heSo;
}

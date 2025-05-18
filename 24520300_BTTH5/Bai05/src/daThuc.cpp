#include "daThuc.h"
#include<iostream>
using namespace std;
#include<cmath>

istream& operator>>(istream& is, daThuc &a)
{
    cout<<"Bac cua da thuc: "; cin>>a.n;
    for(int i=a.n; i>=0; i--)
        cin>>a.heSo[i];
    while(a.n>0 && a.heSo[a.n]==0)
        a.n--;
    return is;
}

ostream& operator<<(ostream& os, const daThuc &a)
{
    if(a.n==0 && a.heSo[0]==0)
    {
        os<<0;
        return os;
    }
    for(int i=a.n; i>=0; i--)
    {
        if(a.heSo[i]==0)continue;
        //he so
        if(a.heSo[i]>0 && i!=a.n)os<<'+';
        if(a.heSo[i]==1 && i>0){}
        else if(a.heSo[i]==-1 && i>0)os<<'-';
        else os<<a.heSo[i];
        //so mu
        if(i==0)continue;
        else if(i==1)os<<"x";
        else os<<"x^"<<i;
    }
    return os;
}

daThuc operator+(daThuc a, daThuc b)
{
    daThuc result;
    result.n=max(a.n,b.n);
    for(int i=result.n; i>=0; i--)
    {
        int heSo1=(a.n>=i)?a.heSo[i]:0;
        int heSo2=(b.n>=i)?b.heSo[i]:0;
        result.heSo[i]=heSo1+heSo2;
    }
    return result;
}

daThuc operator-(daThuc a, daThuc b)
{
    daThuc result;
    result.n=max(a.n,b.n);
    for(int i=result.n; i>=0; i--)
    {
        int heSo1=(a.n>=i)?a.heSo[i]:0;
        int heSo2=(b.n>=i)?b.heSo[i]:0;
        result.heSo[i]=heSo1-heSo2;
    }
    return result;
}

int daThuc::giaTriTaix(int x)
{
    int value=0;
    for(int i=n; i>=0; i--)
    {
        value+=heSo[i]*pow(x,i);
    }
    return value;
}

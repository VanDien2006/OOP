#include "CVector.h"
#include<iostream>
using namespace std;

int CVector::n=1;

CVector::CVector()
{
    toaDo=new int [CVector::n];
    for(int i=0; i<CVector::n; i++)
        toaDo[i]=0;
}

CVector::CVector(const CVector &another)
{
    toaDo=new int[n];
    for(int i=0; i<n; i++)
        toaDo[i]=another.toaDo[i];
}

CVector::~CVector()
{
    delete [] toaDo;
}

istream& operator>>(istream &is, CVector&a)
{
    for(int i=0; i<CVector::n; i++)
        is>>a.toaDo[i];
    return is;
}

ostream& operator<<(ostream &os, const CVector&a)
{
    os<<'(';
    for(int i=0; i<CVector::n; i++)
    {
        os<<a.toaDo[i];
        if(i!=CVector::n-1)os<<",";
    }
    os<<')';
    return os;
}

CVector operator+(CVector a, CVector b)
{
    CVector result;
    for(int i=0; i<CVector::n; i++)
    {
        result.toaDo[i]=a.toaDo[i]+b.toaDo[i];
    }
    return result;
}

CVector operator-(CVector a, CVector b)
{
    CVector result;
    for(int i=0; i<CVector::n; i++)
    {
        result.toaDo[i]=a.toaDo[i]-b.toaDo[i];
    }
    return result;
}










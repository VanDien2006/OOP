#include "soPhuc.h"
#include<iostream>
using namespace std;

istream& operator>>(istream& is, soPhuc &a)
{
    is>>a.iThuc>>a.iAo;
    return is;
}

ostream& operator<<(ostream& is, soPhuc a)
{
    if(a.iAo==0)
    {
        is<<a.iThuc;
    }
    else
    {
        is<<'('<<a.iThuc<<','<<a.iAo<<')';
    }
    return is;
}

soPhuc operator+ (soPhuc a, soPhuc b)
{
    soPhuc temp;
    temp.iThuc=a.iThuc+b.iThuc;
    temp.iAo=a.iAo+b.iAo;
    return temp;
}

soPhuc operator- (soPhuc a, soPhuc b)
{
    soPhuc temp;
    temp.iThuc=a.iThuc-b.iThuc;
    temp.iAo=a.iAo-b.iAo;
    return temp;
}

soPhuc operator* (soPhuc a, soPhuc b)
{
    soPhuc temp;
    temp.iThuc=a.iThuc*b.iThuc-a.iAo*b.iAo;
    temp.iAo=a.iThuc*b.iAo+a.iAo*b.iThuc;
    return temp;
}

soPhuc operator/ (soPhuc a, soPhuc b)
{
    soPhuc temp;
    temp.iThuc=(a.iThuc*b.iThuc+a.iAo*b.iAo)/(b.iThuc*b.iThuc+b.iAo*b.iAo);
    temp.iAo=(b.iThuc*a.iAo-a.iThuc*b.iAo)/(b.iThuc*b.iThuc+b.iAo*b.iAo);
    return temp;
}

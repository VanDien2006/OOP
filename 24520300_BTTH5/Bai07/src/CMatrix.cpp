#include "CMatrix.h"
#include<iostream>
using namespace std;

CMatrix::CMatrix()
{
    m=n=0;
}

CMatrix::CMatrix(int rows, int cols)
{
    m=rows;
    n=cols;
    data=new int *[m];
    for(int i=0; i<m; i++)
    {
        data[i]=new int [n];
    }
}

CMatrix::CMatrix(const CMatrix &another)
{
    m=another.m;
    n=another.n;
    data=new int*[m];
    for(int i=0; i<m; i++)
    {
        data[i]=new int [n];
        for(int j=0; j<n; j++)
            data[i][j]=another.data[i][j];
    }
}

CMatrix::~CMatrix()
{
    for(int i=0; i<m; i++)
    {
        delete [] data[i];
    }
    delete []data;
}

istream& operator>>(istream& is, CMatrix &a)
{
    for(int i=0; i<a.m; i++)
    {
        for(int j=0; j<a.n; j++)
        {
            is>>a.data[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, CMatrix a)
{
    for(int i=0; i<a.m; i++)
    {
        for(int j=0; j<a.n; j++)
        {
            os<<a.data[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}

CMatrix operator*(CMatrix a, CMatrix b)
{
    CMatrix result(a.m, b.n);
    for(int i=0; i<a.m; i++)
    {
        for(int j=0; j<b.n; j++)
        {
            result.data[i][j]=0;
            for(int k=0; k<a.n; k++)
                result.data[i][j]+=a.data[i][k]*b.data[k][j];
        }
    }
    return result;
}

CMatrix operator*(CMatrix a, int* Vector)
{
    CMatrix result(a.m,1);
    for(int i=0; i<a.m; i++)
    {
        result.data[i][0]=0;
        for(int j=0; j<a.n; j++)
        {
            result.data[i][0]+=a.data[i][j]*Vector[j];
        }
    }
    return result;
}


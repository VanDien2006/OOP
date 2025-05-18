#ifndef CVECTOR_H
#define CVECTOR_H
#include<iostream>
using namespace std;

class CVector
{
private:
    static int n;
    int *toaDo;
public:
    CVector();
    CVector(const CVector &another);
    ~CVector();
    static void setn(int k){CVector::n=k;}
    friend istream& operator>>(istream &is, CVector&a);
    friend ostream& operator<<(ostream &os, const CVector&a);
    friend CVector operator+(CVector a, CVector b);
    friend CVector operator-(CVector a, CVector b);
};

#endif // CVECTOR_H

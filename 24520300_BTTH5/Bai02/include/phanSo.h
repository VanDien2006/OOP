#ifndef PHANSO_H
#define PHANSO_H
#include<iostream>
using namespace std;

class phanSo
{
private:
    int iTu;
    int iMau;
public:
    friend istream& operator>>(istream&, phanSo&);
    friend ostream& operator<<(ostream&, phanSo);
    friend int gcd(int a, int b);
    void RutGon();
    friend phanSo operator+ (phanSo a, phanSo b);
    friend phanSo operator- (phanSo a, phanSo b);
    friend phanSo operator* (phanSo a, phanSo b);
    friend phanSo operator/ (phanSo a, phanSo b);
    friend bool operator== (phanSo a, phanSo b);
    int getiTu(){return iTu;}
};

#endif // PHANSO_H

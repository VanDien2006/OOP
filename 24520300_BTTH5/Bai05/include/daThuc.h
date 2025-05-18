#ifndef DATHUC_H
#define DATHUC_H
#include<iostream>
using namespace std;

class daThuc
{
private:
    int n;
    int *heSo=new int[n+1];
public:
    friend istream& operator>>(istream&, daThuc&);
    friend ostream& operator<<(ostream&, const daThuc&);
    friend daThuc operator+(daThuc a, daThuc b);
    friend daThuc operator-(daThuc a, daThuc b);
    int giaTriTaix(int x);
};

#endif // DATHUC_H

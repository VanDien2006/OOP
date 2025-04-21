#ifndef CCANDIDATE_H
#define CCANDIDATE_H
#include<iostream>
using namespace std;

class cCandidate
{
protected:
    string ma, ten;
    int day, month, year;
    double toan, van, anh, tongDiem;
public:
    cCandidate();
    ~cCandidate();
    void Nhap();
    void Xuat();
    int getTongDiem(){return this->tongDiem;}
};

#endif // CCANDIDATE_H

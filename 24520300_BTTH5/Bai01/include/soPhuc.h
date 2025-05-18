#ifndef SOPHUC_H
#define SOPHUC_H
#include<iostream>
using namespace std;

class soPhuc
{
private:
    int iThuc, iAo;
public:
    friend istream& operator>>(istream& , soPhuc &);
    friend ostream& operator<<(ostream&, soPhuc);
    friend soPhuc operator+ (soPhuc a, soPhuc b);
    friend soPhuc operator- (soPhuc a, soPhuc b);
    friend soPhuc operator* (soPhuc a, soPhuc b);
    friend soPhuc operator/ (soPhuc a, soPhuc b);
    int getiThuc(){return this->iThuc;}
    int getiAo(){return this->iAo;}
};

#endif // SOPHUC_H

#ifndef CMATRIX_H
#define CMATRIX_H
#include<iostream>
using namespace std;

class CMatrix
{
private:
    int m, n;
    int **data;
public:
    CMatrix();
    CMatrix(int rows, int cols);
    CMatrix(const CMatrix &another);
    ~CMatrix();
    friend istream& operator>>(istream&, CMatrix &a);
    friend ostream& operator<<(ostream&, CMatrix a);
    friend CMatrix operator*(CMatrix a, CMatrix b);
    friend CMatrix operator*(CMatrix a, int* Vector);
    int getRows(){return m;}
    int getCols(){return n;}
};

#endif // CMATRIX_H

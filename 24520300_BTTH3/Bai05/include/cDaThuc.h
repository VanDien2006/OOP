#ifndef CDATHUC_H
#define CDATHUC_H


class cDaThuc
{
private:
    int n;
    int *heSo=new int [n+1];
public:
    cDaThuc();
    ~cDaThuc();
    void Nhap();
    void Xuat();
    void setn(int soMu);
    int getn(){return n;};
    double function_(double x);
    void congDaThuc(cDaThuc);
    void truDaThuc(cDaThuc);
};

#endif // CDATHUC_H

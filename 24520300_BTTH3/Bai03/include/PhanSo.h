#ifndef PHANSO_H
#define PHANSO_H


class PhanSo
{
protected:
    int iTu, iMau;
public:
    PhanSo();
//    PhanSo(int tu=0, int mau=0);
    ~PhanSo();
    int getiTu(){return this->iTu;}
    int getiMau(){return this->iMau;}
    void setiTu(int tu){this->iTu=tu;}
    void setiMau(int mau){this->iMau=mau;}
    void Nhap();
    void Xuat();
    friend PhanSo Tong(PhanSo a,PhanSo b);
    friend int SoSanh(PhanSo a, PhanSo b);
    void RutGon();
};

#endif // PHANSO_H

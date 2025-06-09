#ifndef GD_H
#define GD_H
#include<iostream>
using namespace std;

class GD
{
protected:
    string MGD;
    int ngay, thang, nam;
    double DonGia;
    double DienTich;
    double Tien;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void ThanhTien()=0;
    virtual string getType()=0;
    int getThang(){return thang;}
    int getNam(){return nam;}
    int getTien(){return Tien;};
    virtual ~GD(){}
};

#endif // GD_H

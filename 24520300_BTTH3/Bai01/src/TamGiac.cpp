#include "TamGiac.h"
#include "Diem.h"
#include<iostream>
using namespace std;
#include<math.h>

TamGiac::TamGiac()
{

}

TamGiac::TamGiac(Diem a=Diem(0,0) , Diem b=Diem(0,0) , Diem c=Diem(0,0))
{
    A=a;
    B=b;
    C=c;
}

TamGiac::~TamGiac()
{
}

double TamGiac::TinhDienTich()
{
    double xA=A.getdx();
    double yA=A.getdy();
    double xB=B.getdx();
    double yB=B.getdy();
    double xC=C.getdx();
    double yC=C.getdy();
    return 0.5*fabs((xB-xA)*(yC-yA)-(xC-xA)*(yB-yA));
}


void TamGiac::Nhap()
{
    bool check=true;
    do
    {
        if(check==false)cout<<"3 diem thang hang, tam giac khong hop le! Nhap lai: \n";
        cout<<"Nhap diem A: "; A.Nhap();
        cout<<"Nhap diem B: "; B.Nhap();
        cout<<"Nhap diem C: "; C.Nhap();
        check=false;
    }
    while(this->TinhDienTich()==0);
}

void TamGiac::Xuat()
{
    cout<<"Toa do diem A: "; A.Xuat(); cout<<endl;
    cout<<"Toa do diem B: "; B.Xuat(); cout<<endl;
    cout<<"Toa do diem C: "; C.Xuat(); cout<<endl;
}

bool ganBang(double a, double b)
{
    return fabs(a-b)<(1e-9);
}

string TamGiac::PhanLoai()
{
    double AB=getAB();
    double BC=getBC();
    double AC=getAC();
    if(ganBang(AB*AB,BC*BC+AC*AC) || ganBang(BC*BC,AB*AB+AC*AC) || ganBang(AC*AC, AB*AB+BC*BC) )
        return "tam giac vuong";
    else if(ganBang(AB,AC) && ganBang(AB,BC))
        return "tam giac deu";
    else if(ganBang(AB,AC) || ganBang(AB,BC) || ganBang(AC,BC))
        return "tam giac can";
    else
        return "tam giac thuong";
}

double TamGiac::TinhChuVi()
{
    double AB=getAB();
    double BC=getBC();
    double AC=getAC();
    return AB+BC+AC;
}

void TamGiac::TinhTien(double x, double y)
{
    A.TinhTien(x,y);
    B.TinhTien(x,y);
    C.TinhTien(x,y);
}
void TamGiac::ThuPhong(double scale)
{
    A.setdx(A.getdx()*scale);
    A.setdy(A.getdy()*scale);
    B.setdx(B.getdx()*scale);
    B.setdy(B.getdy()*scale);
    C.setdx(C.getdx()*scale);
    C.setdy(C.getdy()*scale);
}

void TamGiac::Quay(double alpha)
{
    A.Quay(alpha);
    B.Quay(alpha);
    C.Quay(alpha);
}


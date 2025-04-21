#include "cDSPhanSo.h"
#include "PhanSo.h"
#include<iostream>
using namespace std;
#include<algorithm>

cDSPhanSo::cDSPhanSo()
{
    this->SoLuong=0;
}

cDSPhanSo::~cDSPhanSo()
{
}

void cDSPhanSo::Nhap()
{
    bool check=true;
    cout<<"Nhap so luong phan so: ";
    do
    {
        if(check==false)cout<<"So luong phan so khong hop le! Nhap lai: ";
        cin>>this->SoLuong;
        check=false;
    }while(SoLuong<1);
    cout<<"Nhap cac phan so: \n";
    for(int i=0; i<SoLuong; i++)
    {
        DanhSachPhanSo[i].Nhap();
    }
}

void cDSPhanSo::Xuat()
{
    for(int i=0; i<SoLuong; i++)
    {
        DanhSachPhanSo[i].Xuat();
    }
    cout<<endl;
}

void cDSPhanSo::TongCacPhanSo()
{
    cout<<"Tong cac phan so la: ";
    PhanSo sum=DanhSachPhanSo[0];
    for(int i=1; i<this->SoLuong; i++)
    {
        sum=Tong(sum, DanhSachPhanSo[i]);
    }
    sum.RutGon();
    sum.Xuat();
}

void cDSPhanSo::PhanSoLonNhat()
{
    cout<<"Phan so lon nhat la: ";
    PhanSo Max=DanhSachPhanSo[0];
    for(int i=1; i<this->SoLuong; i++)
    {
        if(SoSanh(DanhSachPhanSo[i], Max)==1)
            Max=DanhSachPhanSo[i];
    }
    Max.Xuat();
}

void cDSPhanSo::PhanSoNhoNhat()
{
    cout<<"Phan so nho nhat la: ";
    PhanSo Min=DanhSachPhanSo[0];
    for(int i=1; i<this->SoLuong; i++)
    {
        if(SoSanh(DanhSachPhanSo[i], Min)==-1)
            Min=DanhSachPhanSo[i];
    }
    Min.Xuat();
}

bool soNguyenTo(int n)
{
    if(n<2)return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)return false;
    return true;
}

void cDSPhanSo::PhanSoCoTuLaSoNguyenToLonNhat()
{
    bool check=true;
    int temp=2;
    for(int i=1; i<SoLuong; i++)
    {
        if( soNguyenTo(DanhSachPhanSo[i].getiTu()) && (DanhSachPhanSo[i].getiTu()>temp) )
            temp=DanhSachPhanSo[i].getiTu();
    }
    cout<<"Danh sach phan so co tu so la so nguyen to lon nhat: \n";
    for(int i=0; i<SoLuong; i++)
    {
        if( DanhSachPhanSo[i].getiTu()==temp)
            {
                DanhSachPhanSo[i].Xuat();
                check=false;
            }
    }
    if(check)cout<<"Not found!\n";
    cout<<endl;
}

bool ascending_compare(PhanSo a, PhanSo b)
{
    if(SoSanh(a,b)==-1 || SoSanh(a,b)==0)return true;
    else return false;
}

void cDSPhanSo::SapXepDanhSachPhanSoTangDan()
{
    sort(DanhSachPhanSo, DanhSachPhanSo+SoLuong, ascending_compare);
}

bool decending_compare(PhanSo a, PhanSo b)
{
    if(SoSanh(a,b)==0 || SoSanh(a,b)==1)return true;
    else return false;}

void cDSPhanSo::SapXepDanhSachPhanSoGiamDan()
{
    sort(DanhSachPhanSo, DanhSachPhanSo+SoLuong, decending_compare);
}

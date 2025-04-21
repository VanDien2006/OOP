#include "cListNhanVienSX.h"
#include<iostream>
using namespace std;


cListNhanVienSX::cListNhanVienSX()
{
    this->n=0;
}

cListNhanVienSX::~cListNhanVienSX(){}


void cListNhanVienSX::Nhap()
{
    cout<<"Nhap so nhan vien san xuat: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"So nhan vien san xuat khong hop le! Nhap lai: ";
        cin>>n;
        check=false;
    }while(n<0);
    cout<<"Nhap thong tin cac nhan vien san xuat: \n";
    for(int i=0; i<n; i++)
    {
        nhanVien[i].Nhap();
    }
}

void cListNhanVienSX::Xuat()
{
    for(int i=0; i<n; i++)
        nhanVien[i].Xuat();
}

void cListNhanVienSX::nhanVienLuongThapNhat()
{
    if(n==0)
    {
        cout<<"Danh sach nhan vien rong!";
        return;
    }
    double min_luong=nhanVien[0].getLuong();
    for(int i=0; i<n; i++)
        if(nhanVien[i].getLuong()<min_luong)
            min_luong=nhanVien[i].getLuong();
    cout<<"Danh sach nhan vien co luong thap nhat la: \n";
    for(int i=0; i<n; i++)
        if(nhanVien[i].getLuong()==min_luong)
            nhanVien[i].Xuat();
}

double cListNhanVienSX::tongLuong()
{
    double sum=0;
    for(int i=0; i<n; i++)
        sum+=nhanVien[i].getLuong();
    return sum;
}

void cListNhanVienSX::nhanVienTuoiCaoNhat()
{
    if(n==0)
    {
        cout<<"Danh sach nhan vien rong!";
        return;
    }
    int max_tuoi=nhanVien[0].getTuoi();
    for(int i=0; i<n; i++)
        if(nhanVien[i].getTuoi()>max_tuoi)
            max_tuoi=nhanVien[i].getTuoi();
    cout<<"Danh sach nhan vien co tuoi cao nhat la: \n";
    for(int i=0; i<n; i++)
        if(nhanVien[i].getTuoi()==max_tuoi)
            nhanVien[i].Xuat();
}

void Merge(cNhanVienSX nhanVien[], int left, int middle, int right)
{
    int nb=middle-left+1; cNhanVienSX *b=new cNhanVienSX[nb];
    int nc=right-middle; cNhanVienSX *c=new cNhanVienSX[nc];
    for(int i=0; i<nb; i++)b[i]=nhanVien[left+i];
    for(int i=0; i<nc; i++)c[i]=nhanVien[middle+1+i];
    int i=0, j=0;
    while(i<nb && j<nc)
        nhanVien[left++]=(b[i].getLuong()<=c[j].getLuong())?b[i++]:c[j++];
    while(i<nb)
        nhanVien[left++]=b[i++];
    while(j<nc)
        nhanVien[left++]=c[j++];
    delete []b;
    delete []c;
}

void mergeSort(cNhanVienSX nhanVien[], int left, int right)
{
    if(left>=right)return;
    int middle=(left+right)/2;
    mergeSort(nhanVien, left, middle);
    mergeSort(nhanVien, middle+1, right);
    Merge(nhanVien, left, middle, right);
}

void cListNhanVienSX::sapXepTangDan()
{
    if(n<2)return;
    mergeSort(nhanVien, 0, n-1);
}




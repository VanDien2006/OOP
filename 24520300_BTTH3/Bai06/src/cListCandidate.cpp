#include "cListCandidate.h"
#include<iostream>
using namespace std;

cListCandidate::cListCandidate()
{
    this->n=0;
}

cListCandidate::~cListCandidate(){}

void cListCandidate::Nhap()
{
    cout<<"Nhap so thi sinh: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"So thi sinh khong hop le! Nhap lai: ";
        cin>>n;
        check=false;
    }while(n<0);
    cout<<"Nhap thong tin cac thi sinh: \n";
    for(int i=0; i<n; i++)
    {
        thiSinh[i].Nhap();
    }
}

void cListCandidate::Xuat()
{
    for(int i=0; i<n; i++)
        thiSinh[i].Xuat();
}

void cListCandidate::thiSinhDiemCaoNhat()
{
    if(n==0)
    {
        cout<<"Danh sach sinh vien rong!";
        return;
    }
    int max_tongDiem=thiSinh[0].getTongDiem();
    for(int i=0; i<n; i++)
        if(thiSinh[i].getTongDiem()>max_tongDiem)
            max_tongDiem=thiSinh[i].getTongDiem();
    cout<<"Danh sach thi sinh co tong diem cao nhat la: \n";
    for(int i=0; i<n; i++)
        if(thiSinh[i].getTongDiem()==max_tongDiem)
            thiSinh[i].Xuat();
}

void Merge(cCandidate thiSinh[], int left, int middle, int right)
{
    int nb=middle-left+1; cCandidate *b=new cCandidate[nb];
    int nc=right-middle; cCandidate *c=new cCandidate[nc];
    for(int i=0; i<nb; i++)b[i]=thiSinh[left+i];
    for(int i=0; i<nc; i++)c[i]=thiSinh[middle+1+i];
    int i=0, j=0;
    while(i<nb && j<nc)
        thiSinh[left++]=(b[i].getTongDiem()>=c[j].getTongDiem())?b[i++]:c[j++];
    while(i<nb)
        thiSinh[left++]=b[i++];
    while(j<nc)
        thiSinh[left++]=c[j++];
    delete []b;
    delete []c;
}

void mergeSort(cCandidate thiSinh[], int left, int right)
{
    if(left>=right)return;
    int middle=(left+right)/2;
    mergeSort(thiSinh, left, middle);
    mergeSort(thiSinh, middle+1, right);
    Merge(thiSinh, left, middle, right);
}

void cListCandidate::sapXepGiamDan()
{
    if(n<2)return;
    mergeSort(thiSinh, 0, n-1);
}

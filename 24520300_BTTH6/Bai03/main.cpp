#include <iostream>
using namespace std;
#include "He.h"
#include "HeCD.h"
#include "HeDH.h"

int main()
{
    //Cau a: Nhap

    int n;
    do
    {
        cout<<"Nhap so luong sinh vien (tu 1 den 10): ";
        cin>>n;
    }
    while(n<1 || n>10);
    He *p[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Nhap lua chon: "<<endl;
        cout<<"1. Sinh vien cao dang."<<endl;
        cout<<"2. Sinh vien dai hoc."<<endl;
        int LuaChon; cin>>LuaChon;

        if(LuaChon==1)p[i]=new HeCD;
        else p[i]=new HeDH;

        p[i]->Nhap();
    }

    //Cau b: Xuat

    cout<<"Danh sach sinh vien\n";
    for(int i=0; i<n; i++)
    {
        p[i]->Xuat();
    }

    //Cau c: Xuat SV du dk tot nghiep

    cout<<"Danh sach sinh vien du dieu kien tot nghiep\n";
    bool check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="HeCD")
        {
            if( p[i]->DuDieuKien() )
            {
                check=true;
                p[i]->Xuat();
            }
        }
        else
        {
            if( p[i]->DuDieuKien() )
            {
                check=true;
                p[i]->Xuat();
            }
        }
    }
    if(check==false)cout<<"Khong co sinh vien nao du dieu kien tot nghiep!"<<endl;

    //Cau d: Xuat SV khong du dk tot nghiep

    cout<<"Danh sach sinh vien khong du dieu kien tot nghiep"<<endl;
    check=false;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="HeCD")
        {
            if( !(p[i]->DuDieuKien()) )
            {
                check=true;
                p[i]->Xuat();
            }
        }
        else
        {
            if( !(p[i]->DuDieuKien()) )
            {
                check=true;
                p[i]->Xuat();
            }
        }
    }
    if(check==false)cout<<"Khong co sinh vien nao khong du dieu kien tot nghiep!"<<endl;

    //Cau e: Danh sach sv dai hoc co DTB cao nhat
    check=false;
    cout<<"Danh sach sinh vien dai hoc co diem trung binh cao nhat"<<endl;
    double max=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="HeDH")
        {
            check=true;
            if(max < p[i]->getDTB())
            {
                max=p[i]->getDTB();
            }
        }
    }
    if(check==false)cout<<"Khong co sinh vien dai hoc!"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(p[i]->getType()=="HeDH")
            {
                if(max == p[i]->getDTB())
                {
                    p[i]->Xuat();
                }
            }
        }
    }

    //Cau f: Danh sach sv cao dang co DTB cao nhat
    check=false;
    cout<<"Danh sach sinh vien cao dang co diem trung binh cao nhat"<<endl;
    max=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="HeCD")
        {
            check=true;
            if(max < p[i]->getDTB())
            {
                max=p[i]->getDTB();
            }
        }
    }
    if(check==false)cout<<"Khong co sinh vien cao dang!"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(p[i]->getType()=="HeCD")
            {
                if(max == p[i]->getDTB())
                {
                    p[i]->Xuat();
                }
            }
        }
    }

    //Cau g: Dem so sinh vien khong du dieu kien tot nghiep moi loai
    int SoSVCDkhongdu=0;
    int SoSVDHkhongdu=0;
    for(int i=0; i<n; i++)
    {
        if(p[i]->getType()=="HeCD")
        {
            if(!p[i]->DuDieuKien())SoSVCDkhongdu++;
        }
        else
        {
            if(!p[i]->DuDieuKien())SoSVDHkhongdu++;
        }
    }
    cout<<"So sinh vien cao dang khong du dieu kien tot nghiep: "<<SoSVCDkhongdu<<endl;
    cout<<"So sinh vien dai hoc khong du dieu kien tot nghiep: "<<SoSVDHkhongdu<<endl;

    //Giai phong bo nho
    for(int i=0; i<n; i++)
    {
        delete p[i];
        p[i]=NULL;
    }
    return 0;
}

/*
4
1
CD001
Nguyen Van A
Q1
130
6.5
6
1
CD002
Tran Thi B
Q3
110
4.5
6
2
DH001
Le Van C
Q5
180
7
AI
8
2
DH002
Pham Thi D
Q2
160
6
ML
4
*/








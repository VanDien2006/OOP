#include "cCandidate.h"
#include<iostream>
using namespace std;

cCandidate::cCandidate()
{
    ma=ten="";
    day=month=year=0;
    toan=van=anh=0;
    tongDiem=0;
}

cCandidate::~cCandidate(){}

int ngayTrongThang(int thang, int nam)
{
    switch(thang)
    {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if(nam%400==0 || nam%4==0 && nam%100!=0)return 29;
        else return 28;
    default:
        return 31;
    }
}

bool kiemTraNgay(int ngay, int thang, int nam)
{
    if(thang<1 || thang>12 || ngay<1)return false;
    return ngay<=ngayTrongThang(thang, nam);
}

void cCandidate::Nhap()
{
    cout<<"Nhap ma thi sinh: ";
    cin>>ma;
    cin.ignore();
    cout<<"Nhap ten thi sinh: ";
    getline(cin,ten);
    cout<<"Nhap ngay thang nam: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"Ngay thang nam khong hop le! Nhap lai: ";
        cin>>day>>month>>year;
        check=false;
    }while(!kiemTraNgay(day,month,year));
    cout<<"Nhap diem toan: ";
    check=true;
    do
    {
        if(check==false)cout<<"Diem toan khong hop le! Nhap lai: ";
        cin>>toan;
        check=false;
    }while(toan<0 || toan >10);
    cout<<"Nhap diem van: ";
    check=true;
    do
    {
        if(check==false)cout<<"Diem van khong hop le! Nhap lai: ";
        cin>>van;
        check=false;
    }while(van<0 || van >10);
    cout<<"Nhap diem anh: ";
    check=true;
    do
    {
        if(check==false)cout<<"Diem anh khong hop le! Nhap lai: ";
        cin>>anh;
        check=false;
    }while(anh<0 || anh >10);
    tongDiem=toan+van+anh;
}

void cCandidate::Xuat()
{
    cout<<ma<<"\t"<<ten<<"\t"<<day<<"/"<<month<<"/"<<year<<"\t"<<"toan: "<<toan<<" van: "<<van<<" anh: "<<anh<<" tong diem: "<<tongDiem<<endl;
}


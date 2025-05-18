#include "CDate.h"
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>

int daysInMonth(int month, int year)
{
    switch(month)
    {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if(year%400==0 || year%4==0 && year%100!=0)
                return 29;
            else return 28;
        default:
            return 31;
    }
}

bool CDate::checkDate()
{
    if(year<1 || month<1 || month >12 || day<1)return false;
    else return day<=daysInMonth(month,year);
}

istream& operator>>(istream& is, CDate &d)
{
    bool check=true;
    do
    {
        if(check==false)cout<<"Ngay thang khong hop le! Nhap lai: ";
        cin>>d.day>>d.month>>d.year;
        check=false;
    }while(!d.checkDate());
    return is;
}

ostream& operator<<(ostream &is, CDate d)
{
    cout<<setfill('0')
        <<setw(2)<<d.day<<'/'
        <<setw(2)<<d.month<<'/'
        <<setw(4)<<d.year;
    return is;
}

CDate CDate::operator+(int days)
{
    CDate temp=*this;
    while(days-- >0)
    {
        temp.day++;
    }
    return temp;
}

CDate CDate::operator-(int days)
{
    CDate temp=*this;
    while(days-- >0)
    {
        temp.day--;
    }
    return temp;
}

CDate CDate::operator++(int)
{
    CDate temp=*this;
    temp.day++;
    if(!temp.checkDate())
    {
        temp.day=1;
        temp.month++;
        if(!temp.checkDate())
        {
            temp.month=1;
            temp.year++;
        }
    }
    return temp;
}

CDate CDate::operator--(int)
{
    CDate temp=*this;
    temp.day--;
    if(temp.day==0)
    {
        temp.month--;
        if(temp.month==0)
        {
            temp.month=12;
            temp.year--;
            if(temp.year==0)
                temp.day=temp.month=temp.year=1;
            else
                temp.day=daysInMonth(temp.month,temp.year);
        }
    }
    return temp;
}

int CDate::countLeapYears()
{
    int y=year;

    if(month<=2)y--;

    return y/4-y/100+y/400;
}

int CDate::getTotalDays()
{
    static int monthDays[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total=365*year+day;

    for(int i=1; i<month; i++)
        total+=monthDays[i];

    total+= countLeapYears();
    return total;
}

int distance(CDate d1, CDate d2)
{
    int n1=d1.getTotalDays();
    int n2=d2.getTotalDays();
    return abs(n1-n2);
}

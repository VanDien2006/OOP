#include "CTime.h"
#include<iomanip>

bool checkTime(int h, int m, int s)
{
    return (h>=0 && h<24 && m>=0 && m<60 && s>=0 && s<60);
}

istream& operator>>(istream& is, CTime &a)
{
    bool check=true;
    do
    {
        if(check==false)cout<<"Thoi gian khong hop le! Nhap lai: ";
        cin>>a.iHour>>a.iMinute>>a.iSecond;
        check=false;
    }while(a.iHour<0 || a.iHour>=24 || a.iMinute<0 || a.iMinute>=60 || a.iSecond<0 || a.iSecond>=60);
    return is;
}

ostream& operator<<(ostream& is, CTime a)
{
    is<<setfill('0')
      <<setw(2)<<a.iHour<<':'
      <<setw(2)<<a.iMinute<<':'
      <<setw(2)<<a.iSecond;
    return is;
}

void CTime::convert_to_time(int total_seconds)
{
    const int seconds_in_day=24*3600;
    total_seconds%=seconds_in_day;

    if(total_seconds<0)total_seconds+=seconds_in_day;

    iHour=total_seconds/3600;
    iMinute=(total_seconds%3600)/60;
    iSecond=total_seconds%60;
}

CTime CTime::operator+(int seconds)
{
    int total_seconds=iHour*3600+iMinute*60+iSecond+seconds;
    CTime result;
    result.convert_to_time(total_seconds);
    return result;
}

CTime CTime::operator-(int seconds)
{
    int total_seconds=iHour*3600+iMinute*60+iSecond-seconds;
    CTime result;
    result.convert_to_time(total_seconds);
    return result;
}

CTime CTime::operator++(int)
{
    int total_seconds=iHour*3600+iMinute*60+iSecond+1;
    this->convert_to_time(total_seconds);
    return *this;
}

CTime CTime::operator--(int)
{
    int total_seconds=iHour*3600+iMinute*60+iSecond-1;
    this->convert_to_time(total_seconds);
    return *this;
}






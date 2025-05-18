#ifndef CTIME_H
#define CTIME_H
#include<iostream>
using namespace std;

class CTime
{
private:
    int iHour;
    int iMinute;
    int iSecond;
public:
    friend istream& operator>>(istream&, CTime&);
    friend ostream& operator<<(ostream&, CTime);
    void convert_to_time(int);
    CTime operator+(int);
    CTime operator-(int);
    CTime operator++(int);
    CTime operator--(int);
};

#endif // CTIME_H

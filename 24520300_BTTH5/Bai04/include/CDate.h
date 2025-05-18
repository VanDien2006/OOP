#ifndef CDATE_H
#define CDATE_H
#include<iostream>
using namespace std;

class CDate
{
private:
    int day, month, year;
public:
    friend int daysInMonth(int, int);
    bool checkDate();
    friend istream& operator>>(istream&, CDate&);
    friend ostream& operator<<(ostream&, CDate);
    CDate operator+(int);
    CDate operator-(int);
    CDate operator++(int);
    CDate operator--(int);
    int countLeapYears();
    int getTotalDays();
    friend int distance(CDate, CDate);
};

#endif // CDATE_H

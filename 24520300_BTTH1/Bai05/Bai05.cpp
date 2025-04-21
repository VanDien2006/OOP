/*
Bài tập 5: Viết chương trình nhập vào một ngày.
- Tìm ngày kế tiếp và xuất kết quả.
- Tìm ngày trước ngày này và xuất kết quả.
- Tính xem ngày đó là ngày thứ bao nhiêu trong năm và xuất kết quả.
*/
#include<iostream>
using namespace std;

struct date
{
    int day, month, year;
};

bool isLeapYear(int y)
{
    if( y%4==0 && y%100!=0 || y%400==0 )return true;
    return false;
}

int daysInMonth(date t)
{
    switch(t.month)
    {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if(isLeapYear(t.year))return 29;
            else return 28;
        default:
            return 31;
    }
}

bool isValidDate(date t)
{
    if(t.day<1 || t.month<1 || t.month>12)return false;
    return t.day<=daysInMonth(t);
}

date nextDay(date t)
{
    t.day++;
    if(t.day>daysInMonth(t))
    {
        t.day=1;
        t.month++;
        if(t.month>12)
        {
            t.month=1;
            t.year++;
        }
    }
    return t;
}

date lastDay(date t)
{
    t.day--;
    if(t.day<1)
    {
        t.month--;
        if(t.month<1)
        {
            t.month=12;
            t.year--;
        }
        //so ngay se lay so ngay cua thang sau khi lui ve
        date n{1,t.month,t.year};
        t.day=daysInMonth(n);
    }
    return t;
}

int Day(date t)
{
    int temp=t.day;
    for(int i=1; i<t.month; i++)
    {
        int ngayThangNay;
        if(i==4 || i==6 || i==9 || i==11)
            ngayThangNay=30;
        else if(i==2)
        {
            ngayThangNay=(t.year % 4 == 0 && t.year % 100 != 0) || (t.year % 400 == 0) ? 29 : 28;
        }
        else ngayThangNay=31;
        temp+=ngayThangNay;
    }
    return temp;
}


int main()
{
    date t,n;
    cin>>t.day>>t.month>>t.year;
    if(!(isValidDate(t)))
    {
        cout<<"ngay thang khong hop le!";
        return 0;
    }
    //xuat ra ngay ke tiep
    cout<<"ngay ke tiep: ";
    n=nextDay(t);
    cout<<n.day<<'/'<<n.month<<'/'<<n.year<<endl;
    //xuat ra ngay truoc do
    cout<<"ngay truoc do: ";
    n=lastDay(t);
    cout<<n.day<<'/'<<n.month<<'/'<<n.year<<endl;
    //xuat ra ngay do la ngay thu bao nhieu trong nam
    cout<<"ngay "<<t.day<<'/'<<t.month<<'/'<<t.year<<" la ngay thu "<<Day(t)<<" trong nam"<<endl;
    return 0;
}

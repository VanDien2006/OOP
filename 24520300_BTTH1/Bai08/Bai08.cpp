/*
Bài tập 7: Hãy xây dựng một chương trình quản lý
thông tin chuyến bay.
*/
#include<iostream>
using namespace std;
#include<algorithm>

struct chuyenBay
{
    string ma;
    int day, month, year;
    int hour, minute;
    string noiDi, noiDen;
};


int daysInMonth(int month, int year)
{
    switch(month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 2:
        if(year%400==0 || year%4==0 && year%100!=0)return 29;
        else return 28;
    default:
        return 30;
    }
}

bool kiemTraNgay(int day, int month, int year)
{
    if(month<1 || month>12)return false;
    if(day<1 || day>daysInMonth(month,year))return false;
    return true;
}

bool dinhDangMa(string s, int n)
{
    if(s.size()>n)return false;
    for(int i=0; i<s.size(); i++)
    {
        if(!( '0'<=s[i] && s[i]<='9' ||  'a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z'))
            return false;
    }
    return true;
}

bool dinhDangDiaDanh(string s, int n)
{
    if(s.size()>n)return false;
    for(int i=0; i<s.size(); i++)
    {
        if(!( s[i]==' ' ||  'a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z'))
            return false;
    }
    return true;
}


void nhap(chuyenBay &a)
{
    bool check=true;
//nhap ma chuyen bay
    cout<<"Nhap ma chuyen bay: ";
    do
    {
    if(check==false)cout<<"Ma chuyen bay khong hop le, nhap lai: ";
    getline(cin,a.ma);
    check=false;
    }while(!dinhDangMa(a.ma,5));
//nhap ngay
    check=true;
    cout<<"Nhap ngay thang chuyen bay: ";
    do
    {
        if(check==false)cout<<"Ngay thang khong hop le, nhap lai: ";
        cin>>a.day>>a.month>>a.year;
        check=false;
    }while(!kiemTraNgay(a.day,a.month,a.year));
//nhap gio
    check=true;
    cout<<"Nhap gio chuyen bay: ";
    do
    {
        if(check==false)cout<<"Gio bay khong hop le, nhap lai: ";
        cin>>a.hour>>a.minute;
        check=false;
    }
    while( !( 0<=a.hour && a.hour<=23 && 0<=a.minute && a.minute<=59) );
//nhap noi di
    cin.ignore();
    check=true;
    cout<<"Nhap noi di: ";
    do
    {
    if(check==false)cout<<"Dia danh khong hop le, nhap lai: ";
    getline(cin,a.noiDi);
    check=false;
    }while(!dinhDangDiaDanh(a.noiDi,20));
//nhap noi den
    check=true;
    cout<<"Nhap noi den: ";
    do
    {
    if(check==false)cout<<"Dia danh khong hop le, nhap lai: ";
    getline(cin,a.noiDen);
    check=false;
    }while(!dinhDangDiaDanh(a.noiDen,20));
}

void xuat(chuyenBay a)
{
    cout<<a.ma<<'\t';
    cout<<a.day<<'/'<<a.month<<'/'<<a.year<<'\t';
    cout<<a.hour<<':'<<a.minute<<'\t';
    cout<<a.noiDi<<'\t'<<a.noiDen<<endl;
}

bool cmp(chuyenBay a, chuyenBay b)
{
    if(a.year!=b.year)return a.year<b.year;
    if(a.month!=b.month)return a.month<b.month;
    if(a.day!=b.day)return a.day<b.day;
    if(a.hour!=b.hour)return a.hour<b.hour;
    if(a.minute!=b.minute)return a.minute<b.minute;
    return false;
}

void find_1(chuyenBay a[], int n)
{
//nhap ma can tim
    cout<<"Nhap ma can tim: "; string s;
    getline(cin,s);
//xuat cac chuyen bay co ma thoa man
    bool kiemTra=true;
    cout<<"Cac chuyen bay co ma "<<s<<" la:\n";
    for(int i=0; i<n; i++)
    {
        if(a[i].ma==s)
        {
            xuat(a[i]);
            kiemTra=false;
        }
    }
    if(kiemTra)cout<<"Not found!\n";
}

void find_2(chuyenBay a[], int n)
{
//nhap noi khoi hanh
    string p;
    cout<<"Nhap noi khoi hanh: ";
    getline(cin,p);
//nhap ngay khoi hanh
    int d, m, y;
    cout<<"Nhap ngay thang chuyen bay: ";
        cin>>d>>m>>y;
//xuat cac chuyen bay co ma thoa man
    bool kiemTra=true;
    cout<<"Cac chuyen bay tu "<<p<<" vao ngay "<<d<<'/'<<m<<'/'<<y<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i].noiDi==p && a[i].day==d && a[i].month==m && a[i].year==y )
        {
            xuat(a[i]);
            kiemTra=false;
        }
    }
    if(kiemTra)cout<<"Not found!\n";
}

void find_3(chuyenBay a[], int n)
{
    string p, q;
//nhap noi khoi hanh
    cout<<"Nhap noi khoi hanh: ";
    getline(cin,p);
//nhap noi den
    cout<<"Nhap noi den: ";
    getline(cin,q);
//xuat cac chuyen bay co ma thoa man
    bool kiemTra=true;
    cout<<"Cac chuyen bay tu "<<p<<" den "<<q<<" la: \n";
    for(int i=0; i<n; i++)
    {
        if(a[i].noiDi==p && a[i].noiDen==q)
        {
            xuat(a[i]);
            kiemTra=false;
        }
    }
    if(kiemTra)cout<<"Not found!\n";
}


int main()
{
    cout<<"Nhap so chuyen bay: ";
    int n; cin>>n;
    chuyenBay a[n];
    cin.ignore();
    if(n==0)return 0;
    for(int i=0; i<n; i++)
    {
        nhap(a[i]);
    }
//sap xep chuyen bay theo ngay gio
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        xuat(a[i]);;
    }
//Kiểm tra mã chuyến bay duoc nhap có tồn tại không.
    find_1(a,n);
//Liệt kê chuyến bay khởi hành từ (noi duoc nhap) vào (ngay duoc nhap)
    find_2(a,n);
    cin.ignore();
//Đếm số chuyến bay từ (noi duoc nhap) đến (noi duoc nhap)
    find_3(a,n);
    return 0;
}

/*
3
VN001
12 3 2024
12 30
Hanoi
Ho Chi Minh
VN002
25 12 2025
18 45
Da Nang
Hue
VN003
5 7 2023
6 15
Hai Phong
Da Nang
VN001
Hai Phong
5 7 2023
Da Nang
Hue
*/

/*
1
VN004
29 2 2024
10 00
Nha Trang
Da Lat
*/

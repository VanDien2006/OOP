/*
Bài tập 8: Xây dựng chương trình quản lý sổ tiết kiệm với
các yêu cầu mở rộng.
*/
#include<iostream>
using namespace std;
#include<algorithm>

struct ngay
{
    int day;
    int month;
    int year;
};

struct soTietKiem
{
    string ma;
    string loai;
    string hoTen;
    string cmnd;
    ngay date;
    double tien;
};

bool dinhDangMa(string s)
{
    if(s.size()>5)return false;
    for(int i=0; i<s.size(); i++)
    {
        if(!( ('0'<=s[i] && s[i]<='9') ||  ('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z') ) )
            return false;
    }
    return true;
}

bool dinhDangCMND(string s)
{
    if(!(s.size()==9 || s.size()==12))return false;
    for(int i=0; i<s.size(); i++)
    {
        if(!( '0'<=s[i] && s[i]<='9' ))
            return false;
    }
    return true;
}

bool dinhDangTen(string s)
{
    if(!(s.size()<=30))return false;
    for(int i=0; i<s.size(); i++)
    {
        if(!(s[i]==' ' || 'a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z'))
            return false;
    }
    return true;
}

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


void nhap(soTietKiem &a)
{
    cin.ignore();
    bool check=true;
//nhap ma so tiet kiem
    cout<<"Nhap ma so tiet kiem: ";
    do
    {
    if(check==false)cout<<"Ma so tiet kiem khong hop le, nhap lai: ";
    getline(cin,a.ma);
    check=false;
    }while(!dinhDangMa(a.ma));
//nhap loai tiet kiem
    check=true;
    cout<<"Nhap loai tiet kiem: ";
    do
    {
    if(check==false)cout<<"Loai tiet kiem khong hop le, nhap lai: ";
    getline(cin,a.loai);
    check=false;
    }while(!(a.loai.size()<=10));

//nhap ho ten
    check=true;
    cout<<"Nhap ho va ten: ";
    do
    {
    if(check==false)cout<<"Ho va ten khong hop le, nhap lai: ";
    getline(cin,a.hoTen);
    check=false;
    }while(!dinhDangTen(a.hoTen));
//nhap chung minh nhan dan
    check=true;
    cout<<"Nhap chung minh nhan dan: ";
    do
    {
    if(check==false)cout<<"So CMND khong hop le, nhap lai: ";
    getline(cin,a.cmnd);
    check=false;
    }while(!dinhDangCMND(a.cmnd));
//nhap ngay mo so
    check=true;
    cout<<"Nhap ngay mo so: ";
    do
    {
    if(check==false)cout<<"Ngay mo so khong hop le, nhap lai: ";
    cin>>a.date.day>>a.date.month>>a.date.year;
    check=false;
    }while(!kiemTraNgay(a.date.day, a.date.month, a.date.year));
//nhap so tien gui
    check=true;
    cout<<"Nhap so tien gui: ";
    do
    {
    if(check==false)cout<<"So tien gui khong hop le, nhap lai: ";
    cin>>a.tien;
    check=false;
    }while(!(a.tien>0));
}

void xuat(soTietKiem a)
{
    cout<<a.ma<<'\t'<<a.loai<<'\t'<<a.hoTen<<'\t'<<a.cmnd<<'\t'<<a.date.day<<'/'<<a.date.month<<'/'<<a.date.year<<'\t'<<a.tien<<endl;
}

void find_1(soTietKiem a[], int n)
{
//nhap so CMND can tim
    cout<<"Nhap CMND can tim: "; string s;
    bool check=true;
    do
    {
    if(check==false)cout<<"So CMND can tim khong hop le, nhap lai: ";
    getline(cin,s);
    check=false;
    }while(!dinhDangCMND(s));
//xuat cac so tiet kiem co so CMND thoa man
    bool kiemTra=true;
    cout<<"Cac so tiet kiem co so CMND "<<s<<" la:\n";
    for(int i=0; i<n; i++)
    {
        if(a[i].cmnd==s)
        {
            xuat(a[i]);
            kiemTra=false;
        }
    }
    if(kiemTra)cout<<"Not found!\n";
}

void find_2(soTietKiem a[], int n)
{
//nhap ma so
    cout<<"Nhap ma so tiet kiem can tim: "; string s;
    bool check=true;
    do
    {
    if(check==false)cout<<"Ma so tiet kiem can tim khong hop le, nhap lai: ";
    getline(cin,s);
    check=false;
    }while(!dinhDangMa(s));
//xuat cac so tiet kiem co so CMND thoa man
    bool kiemTra=true;
    cout<<"Cac so tiet kiem co ma so "<<s<<" la:\n";
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

void find_3(soTietKiem a[], int n)
{
//nhap ma so
    cout<<"Nhap ngay mo so cua so tiet kiem can tim: ";
    int d, m, y;
    bool check=true;
    do
    {
    if(check==false)cout<<"Ngay mo so cua so tiet kiem can tim khong hop le, nhap lai: ";
    cin>>d>>m>>y;
    check=false;
    }while(!kiemTraNgay(d, m, y));
//xuat cac so tiet kiem co so CMND thoa man
    bool kiemTra=true;
    cout<<"Cac so tiet kiem co ngay mo so "<<d<<'/'<<m<<'/'<<y<<" la:\n";
    for(int i=0; i<n; i++)
    {
        if(a[i].date.day==d && a[i].date.month==m && a[i].date.year==y )
        {
            xuat(a[i]);
            kiemTra=false;
        }
    }
    if(kiemTra)cout<<"Not found!\n";
}

bool cmp1(soTietKiem a, soTietKiem b)
{
    return a.tien>=b.tien;
}

bool cmp2(soTietKiem a, soTietKiem b)
{
    if(a.date.year!=b.date.year)return a.date.year<b.date.year;
    if(a.date.month!=b.date.month)return a.date.month<b.date.month;
    if(a.date.day!=b.date.day)return a.date.day<b.date.day;
    return false;
}


int main()
{
    cout<<"Nhap so luong so tiet kiem: ";
    int n; cin>>n;
    soTietKiem a[n];
    for(int i=0; i<n; i++)nhap(a[i]);
    for(int i=0; i<n; i++)xuat(a[i]);
    cin.ignore();
//tim kiem so tiet kiem theo CMND
    find_1(a,n);
//tim kiem so tiet kiem theo ma so
    find_2(a,n);
//tim kiem so tiet kiem theo ngay
    find_3(a,n);
//sap xep danh sach theo so tien gui giam dan
    cout<<"Danh sach sau khi sap xep theo so tien gui giam dan: \n";
    sort(a,a+n,cmp1);
    for(int i=0; i<n; i++)xuat(a[i]);
//sap xep dang sach theo ngay mo so tang dan
    cout<<"Danh sach sau khi sap xep theo ngay mo so tang dan: \n";
    sort(a,a+n,cmp2);
    for(int i=0; i<n; i++)xuat(a[i]);
    return 0;
}

/*
3
AB123
Daihan
Nguyen Van A
012345678
12 3 2023
5000000
CD456
Nganhan
Tran Thi B
123456789012
25 12 2022
10000000
EF789
Khongkyhan
Le Van C
987654321
1 1 2021
2000000
012345678
CD456
25 12 2022
*/







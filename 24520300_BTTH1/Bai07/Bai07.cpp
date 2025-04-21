/*
Bài tập 6.2: Viết chương trình quản lý thông tin của nhiều học sinh,
bao gồm họ tên, điểm toán, điểm văn, và thêm điểm ngoại ngữ. Chương trình
cần thực hiện các chức năng sau:
*/
#include<iostream>
using namespace std;
#include<sstream>
#include<iomanip>

struct sinhVien
{
    string hoTen;
    double toan, van, anh;
    double dtb;
};

bool kiemTra(string &s)
{
    //kiem tra cac ki tu trong xau
    for(int i=0; i<s.size(); i++)
    {
        if('0'<=s[i] && s[i]<='9')return false;
    }
    //dinh dang lai ten
    stringstream ss(s);
    string result="", tmp;
    while(ss>>tmp)
    {
        result+=toupper(tmp[0]);
        for(int i=1; i<tmp.size(); i++)
        {
            result+=tolower(tmp[i]);
        }
        result+=" ";
    }
    result.pop_back();
    s=result;
    return true;
}

void nhap(sinhVien &a)
{
    //nhap ten cho sinh vien
    bool check=true;
    cout<<"Nhap ten: ";
    do
    {
        if(check==false)cout<<"Ten khong hop le, nhap lai: ";
        cin.ignore();
        getline(cin,a.hoTen);
        check=false;
    }while(!kiemTra(a.hoTen));
    //nhap diem toan
    check=true;
    cout<<"Nhap diem toan: ";
    do
    {
        if(check==false)cout<<"Diem Toan khong hop le, nhap lai: ";
        cin>>a.toan;
        check=false;
    }while(a.toan<0 || a.toan>10);
    //nhap diem van
    check=true;
    cout<<"Nhap diem van: ";
    do
    {
        if(check==false)cout<<"Diem Van khong hop le, nhap lai: ";
        cin>>a.van;
        check=false;
    }while(a.van<0 || a.van>10);
    //nhap diem anh
    check=true;
    cout<<"Nhap diem anh: ";
    do
    {
        if(check==false)cout<<"Diem Anh khong hop le, nhap lai: ";
        cin>>a.anh;
        check=false;
    }while(a.anh<0 || a.anh>10);
    a.dtb=(2*a.toan+a.van+a.anh)/4;
    check=true;
}

void xuat(sinhVien a)
{
    cout<<'\t'<<a.hoTen<<'\t'<<"toan: "<<a.toan<<'\t'<<"van: "<<a.van<<'\t'<<"anh: "<<a.anh<<'\t'<<endl;
    cout<<"\tDiem trung binh: "<<fixed<<setprecision(2)<<a.dtb<<endl;
    cout<<"\tHoc luc: ";
    if(a.dtb<5)cout<<"Yeu"<<endl;
    else if(a.dtb>=5 && a.dtb<6.5)cout<<"Trung binh"<<endl;
    else if(a.dtb>=6.5 && a.dtb<8)cout<<"Kha"<<endl;
    else if(a.dtb>=8 && a.dtb<9)cout<<"Gioi"<<endl;
    else cout<<"Xuat sac"<<endl;
    cout<<endl;
}

//tim xau s trong xau k
bool soSanh(const string &s, const string &k)
{
    string s_copy=s, k_copy=k;
    for(int i=0; i<s_copy.size(); i++)s_copy[i]=tolower(s_copy[i]);
    for(int i=0; i<k_copy.size(); i++)k_copy[i]=tolower(k_copy[i]);

    return k_copy.find(s_copy)!=string::npos;
}

void find_student(sinhVien a[], int n, string s)
{
    bool check=false;
    cout<<"Danh sach sinh vien can tim: \n";
    for(int i=0; i<n; i++)
    {
        if(soSanh(s,a[i].hoTen))
        {
            xuat(a[i]);
            check=true;
        }
    }
    if(check==false)cout<<"Danh sach trong! \n";
}

int main()
{
    cout<<"Nhap so luong sinh vien: ";
    int n; cin>>n;
    sinhVien a[n];
    cout<<"Nhap thong tin cua "<<n<<" sinh vien: \n";
    for(int i=0; i<n; i++)
    {
        nhap(a[i]);
    }
    cout<<"Danh sach sinh vien: \n";
    for(int i=0; i<n; i++)
    {
        xuat(a[i]);
    }
    cout<<"Danh sach sinh vien co diem trung binh cao nhat: \n";
    double max=0;
    for(int i=0; i<n; i++)
    {
        if(max<a[i].dtb)max=a[i].dtb;
    }
    for(int i=0; i<n; i++)
    {
        if(max==a[i].dtb)xuat(a[i]);
    }
    cout<<"Danh sach sinh vien co diem toan that nhat: \n";
    double min=10;
    for(int i=0; i<n; i++)
    {
        if(min>a[i].toan)min=a[i].toan;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i].toan==min)xuat(a[i]);
    }
    cout<<"Sinh vien can tim: ";
    cin.ignore();
    string s; getline(cin,s);
    find_student(a,n,s);
    return 0;
}

/*
2
nguyen van an
6
9
7
tran thi binh
3
8
9
binh
*/

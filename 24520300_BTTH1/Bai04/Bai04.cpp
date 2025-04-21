/*
Bài 4: Lập chương trình tính Sin(x) với độ chính xác 0.00001
theo công thức:
        𝑆𝑖𝑛(𝑥) = 𝑥 −x^3/3!+...+(-1)^n*x^(2n+1)/(2n+1)!
*/

#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>

//tinh gia tri u giai thua
double giaithua(int u)
{
    if(u==0|| u==1)return 1;
    return u*giaithua(u-1);
}

int main()
{
    cout<<"Nhap gia tri n va x: ";
    int n, x; cin>>n>>x;
    double sum=0;
    for(int i=0; i<=n; i++)
    {
        sum+=pow(-1, i)*pow(x,2*i+1)/giaithua(2*i+1);
    }
    cout<<"Sin(x)=";
    cout<<fixed<<setprecision(5)<<sum<<endl;
    return 0;
}

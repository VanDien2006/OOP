#include "cArray.h"
#include<iostream>
using namespace std;
#include<limits.h>

cArray::cArray()
{
    this->n=0;
}

cArray::~cArray()
{
}

void cArray::Nhap()
{
    cout<<"Nhap so luong phan tu cua mang: ";
    bool check=true;
    do
    {
        if(check==false)cout<<"So luong phan tu cua mang khong hop le! Nhap lai: ";
        cin>>this->n;
        check=false;
    }while(n<1 || n>150000);
    cout<<"Nhap cac phan tu cua mang: ";
    for(int i=0; i<n; i++)cin>>arr[i];
}

void cArray::Xuat()
{
    if(n==0)
    {
        cout<<"Empty Array!";
        return;
    }
    for(int i=0; i<this->n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int cArray::count_x(int &x)
{
    int count=0;
    for(int i=0; i<this->n; i++)
        if(arr[i]==x)count++;
    return count;
}

bool cArray::is_ascending_array()
{
    if(n==0)return false;
    for(int i=0; i<n-1; i++)
        if(arr[i]>arr[i+1])return false;
    return true;
}

int cArray::find_the_smallest_odd_number()
{
    int odd=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if( (arr[i]%2!=0 && arr[i]<odd) )
            odd=arr[i];
    }
    return odd;
}

bool is_prime_number(int k)
{
    if(k<2)return false;
    for(int i=2; i*i<=k; i++)
        if(k%i==0)return false;
    return true;
}

int cArray::find_largest_prime_number()
{
    int prime=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>prime && is_prime_number(arr[i]))
            prime=arr[i];
    }
    return prime;
}

int Partition(int a[], int left, int right, bool ascending)
{
    int pivot=a[(left+right)/2];
    int i=left-1, j=right+1;
    while(true)
    {
        do{i++;}while(ascending ? a[i]<pivot:a[i]>pivot);
        do{j--;}while(ascending ? a[j]>pivot: a[j]<pivot);
        if(i>=j)return j;
        swap(a[i], a[j]);
    }
}

void QuickSort(int a[], int left, int right, bool ascending)
{
    if(left>=right)return;
    int p=Partition(a,left,right,ascending);
    QuickSort(a,left,p,ascending);
    QuickSort(a,p+1, right,ascending);
}

void cArray::ascending_sort()
{
    if(n<2)return;
    QuickSort(arr,0,n-1,true);
}

void cArray::descending_sort()
{
    if(n<2)return;
    QuickSort(arr,0,n-1,false);
}

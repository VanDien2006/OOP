/*
Bài tập 6: Cho hai mảng A và B chứa các số nguyên. Hãy xây dựng một chương trình
để xác định xem có bao nhiêu lần mảng A xuất hiện liên tiếp dưới dạng một dãy con
trong mảng B.
Cụ thể:
- Mảng A được coi là xuất hiện trong mảng B nếu tất cả các phần tử của A xuất
  hiện liên tiếp theo đúng thứ tự trong B.
- Các vị trí xuất hiện của A trong B có thể chồng lấn lên nhau
*/

#include<iostream>
using namespace std;

void soLan(int a[], int na, int b[], int nb)
{
    int count=0;
    bool check=true;
    for(int i=0; i<nb; i++)
    {
        for(int j=0; j<na; j++)
        {
            if(a[j]!=b[j+i])check=false;
        }
        if(check)
        {
            count++;
            cout<<i<<' ';
        }
        check=true;
    }
    cout<<endl;
    cout<<"So lan mang a xuat hien trong mang b la: "<< count;
}


int main()
{
    cout<<"Nhap so phan tu mang a va b: \n";
    int na,nb; cin>>na>>nb;
    int a[na], b[nb];
    for(int i=0; i<na; i++)cin>>a[i];
    for(int i=0; i<nb; i++)cin>>b[i];
    soLan(a,na,b,nb);
    return 0;
}

/*
4
12
1 2 3 4
1 2 3 4 2 2 1 2 3 4 1 2
*/

/*
2 7
1 2
1 2 1 2 3 1 2
*/

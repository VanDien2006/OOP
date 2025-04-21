#include <iostream>
#include "cListCandidate.h"
using namespace std;

int main()
{
    cListCandidate p;
    p.Nhap();
    cout<<"Danh sach thi sinh: \n";
    p.Xuat();

    p.thiSinhDiemCaoNhat();

    cout<<"Danh sach thi sinh sau khi sap xep giam dan: \n";
    p.sapXepGiamDan();
    p.Xuat();
    return 0;
}

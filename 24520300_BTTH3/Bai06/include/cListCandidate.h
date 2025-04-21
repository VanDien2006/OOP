#ifndef CLISTCANDIDATE_H
#define CLISTCANDIDATE_H
#include "cCandidate.h"


class cListCandidate
{
private:
    int n;
    cCandidate *thiSinh=new cCandidate [n];
public:
    cListCandidate();
    ~cListCandidate();
    void Nhap();
    void Xuat();
    void thiSinhDiemCaoNhat();
    void sapXepGiamDan();
};

#endif // CLISTCANDIDATE_H

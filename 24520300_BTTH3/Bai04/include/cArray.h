#ifndef CARRAY_H
#define CARRAY_H


class cArray
{
private:
    int n;
    int *arr=new int [n];
public:
    cArray();
    ~cArray();
    void Nhap();
    void Xuat();
    int count_x(int &x);
    bool is_ascending_array();
    int find_the_smallest_odd_number();
    friend bool is_prime_number(int k);
    int find_largest_prime_number();
    void ascending_sort();
    void descending_sort();
};

#endif // CARRAY_H

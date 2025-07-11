#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
// #include<map>
#include<set>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int *p1 = &a; // Pointer to a
    int *p2 = &b; // Pointer to b

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;

    cout << "Pointer p1 points to value: " << *p1 << endl;
    cout << "Pointer p2 points to value: " << *p2 << endl;

    return 0;
}

// This code demonstrates the use of pointers in C++.
// It declares two integer variables, a and b, and initializes them.
// It then creates two pointers, p1 and p2, that point to the addresses of a and b respectively.
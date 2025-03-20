#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        cout << x;
    }
    else if (y > x && y > z)
    {
        cout << y;
    }
    else if (z > x && z > y)
    {
        cout << z;
    }
    else
    {
        cout << "error";
    }
    return 0;
}
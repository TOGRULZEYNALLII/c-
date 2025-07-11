#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y || x == y)
    {
        x = 0;
        cout << x << " " << y;
    }
    else
    {
        cout << x << " " << y;
    }
    return 0;
}

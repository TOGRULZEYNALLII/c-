#include <iostream>
#include <windows.h>
#include <math.h>
#include <vector>
#include <unistd.h>
using namespace std;

int second()
{
    int x, y;
    int basket = 0;
    int count = 0;
    cin >> x;
    for (int i = 0; 0 < x; i++)
    {
        y = x % 10;
        x = x / 10;
        basket = basket + y;
        count++;
    }
    cout << basket / count;
    return 0;
}
int PALINDROME()
{
    int x, y, count, basket = 0;
    cin >> x;
    int orginalX = x;
    for (size_t i = 0; 0 < x; i++)
    {
        y = x % 10;
        basket = basket * 10 + y;
        x = x / 10;
    }
    if (basket == orginalX)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
int encoxtekrarlananboyukeded()
{
    int x, y, z = 0, t;
    cin >> x;
    while (x != 0)
    {
        y = x % 10;
        if (y > z)
        {
            z = y;
            t = 1;
        }
        else if (y == z)
        {
            t++;
        }
        x = x / 10;
    }
    cout << t;
    return 0;
}
#include <iostream>
using namespace std;

int birdenmineqederededler()
{
    int x, orginali;
    for (int i = 1; i < 1000; i++)
    {
        orginali = i;
        bool divisible = true;

        while (i > 0)
        {
            x = i % 10;
            if (x == 0 || orginali % x != 0)
            {
                divisible = false;
                break;
            }
            i = i / 10;
        }

        if (divisible)
        {
            cout << orginali;
        }

        i = orginali;
    }

    return 0;
}

int ekob()
{
    int x, y, t = 1;
    bool dogruluk = false;

    cin >> x >> y;
    if (x < y)
    {
        t = x;
    }
    else
    {
        t = y;
    }

    for (size_t i = t; i <= 100; i++)

    {
        if (i % x == 0 && i % y == 0)
        {
            cout << i;
            break;
        }
        else
        {
            continue;
        }
        break;
    }

    return 0;
}
int asalsayi()
{
    int x, y, t, z;
    cin >> x >> y;
    if (x > y)
    {
        t = x;
        z = y;
    }
    else
    {
        t = y;
        z = x;
    }

    for (size_t i = z; i <= t; i++)
    {
        if (i == 5 || i == 7 || i == 3)
        {
            cout << i << " ";
        }

        if (i != 2 && i != 3 && i != 5 && i != 7 && i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// int main()
// {
//     int x, t = 1,basket=1;
//     cin >> x;
//     for (size_t i = 1; i <= x; i++)
//     {
//         t = t * i;
//     }
//     for (size_t i = 1; i <= t; i++)
//     {

//     }

//     cout << t;
// }
#include <iostream>
using namespace std;

int oifaqoraOxsayanBirsey()
{
    int x, t;
    cin >> x;
    t = x;
    bool z = false;
    for (size_t i = 1; i < x; i++)
    {
        for (size_t j = 1; j < x; j++)
        {
            if (i * i + j * j == t)
            {
                z = true;
                break;
            }
            else
            {
                z = false;
            }
            if (z)
            {
                break;
            }
        }
        if (z)
        {
            break;
        }
    }
    if (z)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// int main()
// {

//     int x, t,i,j,z;
//     bool dogruluk = false;

//     cin >> x;
//     for ( j = 1; j <= x; j++)
//     {
//         for ( i = 5; i <= 100; i++)
//         {
//             if (i % j == 0)
//             {
//                 dogruluk = true;
//                 z=i;
//             }
//             else
//             {
//                 continue;
//             }
//             break;
//         }
//     }
//     if (dogruluk)

//     {
//         cout << z;
//     }

//     return 0;
// }

int main2()
{
    int x, y, t, z;
    cin >> x;
    vector<int> arr;
    vector<int> arr2;
    for (size_t i = 2; i <= x; i++)
    {
        if (i == 5 || i == 7 || i == 3)
        {
            arr.push_back(i);
        }

        if (i != 2 && i != 3 && i != 5 && i != 7 && i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            arr.push_back(i);
        }
    }

    for (int j = 0; j < arr.size() - 1; j++)
    {
        if (arr[j] + 2 == arr[j + 1])
        {
            arr2.push_back(arr[j]);
            arr2.push_back(arr[j + 1]);
            cout << "(" << arr2[arr2.size() - 2] << ", " << arr2[arr2.size() - 1] << ")" << endl;
        }
        arr2.clear();
    }

    return 0;
}

int kardesrakamlar()
{
    int start, end;
    cout << "İki sayı girin: ";
    cin >> start >> end;

    cout << start << " ve " << end << " arasındaki kardeş rakamlar: \n";

    for (int x = start; x <= end; x++)
    {
        int basketx = 0;
        // x sayısının bölenlerinin toplamını hesapla
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                basketx += i;
            }
        }

        if (basketx > x && basketx <= end) // Kardeş rakam olabilmesi için bölen toplamı büyük olmalı
        {
            int baskety = 0;
            // basketx sayısının bölenlerinin toplamını hesapla
            for (int j = 1; j < basketx; j++)
            {
                if (basketx % j == 0)
                {
                    baskety += j;
                }
            }

            // Eğer kardeş rakamsalar, ekrana yazdır
            if (baskety == x)
            {
                cout << x << " ve " << basketx << " kardeş rakamdır.\n";
            }
        }
    }

    return 0;
}

int ekobLCM1denneqeder()
{
    int x, lcm = 1;

    cin >> x;
    for (size_t j = 1; j <= x; j++)
    {

        for (size_t i = 1;; i++)

        {
            if (i % lcm == 0 && i % j == 0)
            {
                lcm = i;
                break;
            }
            else
            {
                continue;
            }
            break;
        }
    }
    cout << lcm << endl;

    return 0;
}
int main()
{
    int x, basket = 0;

    cin >> x;
    for (size_t j = 1; j <= x; j++)
    {
        for (size_t i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                basket += i;
            }
        }

        if (basket == j)
        {
            cout << basket << " ";
        }
        basket = 0;
    }

    return 0;
}
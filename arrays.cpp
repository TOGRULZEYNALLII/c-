#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// arryadaeki elementler boyukdurmu ?
int artansira()
{
    int x;
    cin >> x;
    bool dogruluk = true;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i + 1] <= arr[i])
        {
            dogruluk = false;
            break;
        }
    }

    if (dogruluk)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
int nisbetbolunen71()
{
    int x;
    float ratio, ratiox;
    bool dogruluk = true;
    cin >> x;
    float arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    ratio = arr[1] / arr[0];
    for (int i = 0; i < x - 1; i++)
    {
        ratiox = arr[i + 1] / arr[i];
        if (ratiox != ratio)
        {
            dogruluk = false;
            break;
        }
    }
    if (dogruluk)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}

int ArtasnAzalanHecbiri()
{
    int x;
    bool ascending = true;
    bool descending = true;
    bool neither = true;
    cin >> x;
    float arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            ascending = false;
        }
        else if (arr[i + 1] > arr[i])
        {
            descending = false;
        }
    }
    if (ascending)
    {
        cout << "Ascending";
    }
    else if (descending)
    {
        cout << "Descending";
    }
    else
    {
        cout << "Neither";
    }

    return 0;
}

int kod73()
{
    int x = 8;
    int arr[x];
    int number;
    cin >> number;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    bool found = false;

    for (int i = x - 1; i >= 0; i--)
    {
        if (arr[i] == number)
        {
            cout << "Last Occurrence Index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Not Found";
    }

    return 0;
}

int DiziCutrakamCut()
{
    int counter = 0;
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i] % 2 == 0 && i % 2 == 0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}

int ArraydakiEnkicikVeenboyukElmentler()
{
    int x;
    cin >> x;
    int arr[x];
    int minumum = 0, max = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    minumum = arr[0];
    max = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] <= minumum)
        {
            minumum = arr[i];
        }
        else if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    cout << "minimum = " << minumum << "," << "maximum = " << max;

    return 0;
}

int Elementyerideyismek()
{
    int x;
    cin >> x;
    int arr[x];
    int minumum = 0, max = 0;
    int arridmax = 0;
    int arridmin = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    minumum = arr[0];
    max = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] <= minumum)
        {
            minumum = arr[i];
            arridmin = i;
        }
        else if (arr[i] >= max)
        {
            max = arr[i];
            arridmax = i;
        }
    }
    int change = arr[arridmin];
    arr[arridmin] = arr[arridmax];
    arr[arridmax] = change;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " "; /* code */
    }

    return 0;
}

// yeniden baxildi

int tekrarmaxeded()
{
    int x;
    cin >> x;
    int arr[x];
    int max = -10;
    int count = 0;
    int positionFirst = 0;
    int positionLast = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = 1;
        }
        else if (arr[i] == max)
        {
            count++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == max)
        {
            positionFirst = i;
            break;
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == max)
        {
            positionLast = i;
        }
    }

    cout << "The maximum element is: " << max << endl;
    cout << "The number of occurrences of the maximum element is: " << count << endl;
    cout << "The position of the first maximum element is: " << positionFirst << endl;
    cout << "The position of the last maximum element is: " << positionLast << endl;

    return 0;
}

int tekrarlananElementlersizsay()
{
    int x;
    cin >> x;
    int count = 0;
    vector<int> arr2;
    arr2.resize(x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] != arr[j])
            {
                arr2[count] = arr[i];
                count++;
            }
        }
    }
    cout << "Distinct Elements: " << count << endl;
    return 0;
}

int texmininMean()
// texminin meana yaxin olmamasini yoxlayan proqram 

{
    int x;
    cin>>x;
    int arr[x];
   
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int texmin;
    cin >> texmin;
    int max=arr[x-1];
    int min = arr[0];
    int basket=0;
    int mean=0;
    for (int i = 0; i <x; i++)
    {
        basket+=arr[i];
    }
    mean = basket/(x-1);
    if (texmin<=max && texmin>mean)
    {
        cout << "Maximum" << endl;
    }
    else if (texmin>=min && texmin<mean)
    {
        cout << "Minumum" << endl;
    }
    else if (texmin==mean)
    {
        cout << "Mean" << endl;
    }
    
    
    return 0;
}
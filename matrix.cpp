#include<iostream>


using namespace std;

// arraydaki her sirada minum elementi tapmaq  
int ArrminEachCol(){
    int n, m;
    cin>> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>> matrix[i][j];
        }
    }
    // Her sira ucun min elementi tapmaq

    int x = 0;
    for(int i = 0; i < n; i++){
        int min=100; 
        for (int j = 0; j < m; j++){
            if (matrix[i][j] < min && x == i)  {
                min = matrix[i][j];
               
           }
        }
        x++;
        cout<< min << " ";
    }

    return 0;
}

// arraydaki her --> sutunda<-- min elementi tapmaq 
int minElementEachRow(){
   int n, m;
   cin>> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>> matrix[i][j];
        }
    }

    for(int j = 0; j < m; j++){
        int min = 100;
        for(int i = 0; i < n; i++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
        cout<< min << " ";
    }

    return 0;
}

//column sum to array 

int columnSum(){
    int n , m;
    cin>>n>>m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> matrix[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        int  basket = 0;
        for (int i = 0; i < n; i++)
        {
            basket += matrix[i][j];
        }
        cout << basket << " ";
    }

    return 0;
}

int rowSum(){
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int basket=0;

        for (int j = 0; j < m; j++)
        {
            basket += matrix[i][j];
        }
        cout << basket << " ";
    }
}

// Row Product to Array
int rowProduct(){
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int basket = 1;
        for (int j = 0; j < m; j++)
        {
            basket *= matrix[i][j];
        }
        cout << basket << " ";
    }
    return 0;
}
// Diagonal Sums
int diagonalSums(){
    int n;
    cin >> n ;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    for(int i = 0; i < n; i++){
        primaryDiagonal += matrix[i][i];
        secondaryDiagonal += matrix[i][n-i-1];
    }
    cout << primaryDiagonal << " " << secondaryDiagonal << endl;
    return 0;
}
// Swap Rows and Columns
int swapRowsAndColumns(){
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Diagonal and Above Zeroing 
int diagonalAndAboveZeroing(){
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i <= j){
                matrix[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Count Unique Elements
//  FALSE 
// int  main(){
//     int n,m;
//     cin >> n >> m;
//     int matrix[n][m];
//     int newMatrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     int uniqueCount = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             bool isUnique = true;
//             for(int k = 0; k < n; k++){
//                 for(int l = 0; l < m; l++){
//                     if((i != k || j != l) && matrix[i][j] == matrix[k][l]){
//                         isUnique = false;
//                         break;
//                     }
//                 }
//                 if(!isUnique) break;
//             }
//             if(isUnique){
//                 newMatrix[i][j] = matrix[i][j];
//             }
//         }

//     }
//     cout << uniqueCount << endl;
//     return 0;
// }

// Rows with All Zeros

int rowszerocount (){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool isZeroRow = true;
        for (int j = 0; j < n; j++)
        {
            
            if (matrix[i][j] != 0)
            {
                isZeroRow = false;
                break;
            }
        }
        if (isZeroRow)
        {
            cout << i+1 << " ";
        }
    }

    return 0;
}

// salam
int fillmatrix()
{
    int matrix[5][6] = {
        {1, 2, 3, 4, 5, 6},
        {12, 11, 10, 9, 8, 7},
        {13, 14, 15, 16, 17, 18},
        {24, 23, 22, 21, 20, 19},
        {25, 26, 27, 28, 29, 30}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int fillmatrix2()
{
    //     1  2  3  4  5  6
    // 7  8  9  10 11 12
    // 13 14 15 16 17 18
    // 19 20 21 22 23 24
    // 25 26 27 28 29 30
    int matrix[5][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int yadmnancixdiadi()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == matrix[i][j + 1] && j < n - 1)
            {
                cout << i + 1 << " ";
            }
            break;
        }
    }
    return 0;
}

int maxminnewarr()
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    int pushedarray[m]; // sütun sayısı kadar fark tutacağız

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        int maxVal = matrix[0][j];
        int minVal = matrix[0][j];

        for (int i = 1; i < n; i++)
        {
            if (matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
            if (matrix[i][j] < minVal)
                minVal = matrix[i][j];
        }

        pushedarray[j] = maxVal - minVal;
    }

    for (int i = 0; i < m; i++)
    {
        cout << pushedarray[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0, l = n - 1; i < l; i++, l--)
        {
            if (matrix[i][j] == matrix[l][j])
            {
                cout << j + 1 << " ";
                return 0;
            }
        }
    }

    return 0;
}

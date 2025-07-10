// #include<iostream>

// using namespace std;

// // arraydaki her sirada minum elementi tapmaq
// int ArrminEachCol(){
//     int n, m;
//     cin>> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin>> matrix[i][j];
//         }
//     }
//     // Her sira ucun min elementi tapmaq

//     int x = 0;
//     for(int i = 0; i < n; i++){
//         int min=100;
//         for (int j = 0; j < m; j++){
//             if (matrix[i][j] < min && x == i)  {
//                 min = matrix[i][j];

//            }
//         }
//         x++;
//         cout<< min << " ";
//     }

//     return 0;
// }

// // arraydaki her --> sutunda<-- min elementi tapmaq
// int minElementEachRow(){
//    int n, m;
//    cin>> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin>> matrix[i][j];
//         }
//     }

//     for(int j = 0; j < m; j++){
//         int min = 100;
//         for(int i = 0; i < n; i++){
//             if(matrix[i][j] < min){
//                 min = matrix[i][j];
//             }
//         }
//         cout<< min << " ";
//     }

//     return 0;
// }

// //column sum to array

// int columnSum(){
//     int n , m;
//     cin>>n>>m;
//     int matrix[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>> matrix[i][j];
//         }
//     }

//     for (int j = 0; j < m; j++)
//     {
//         int  basket = 0;
//         for (int i = 0; i < n; i++)
//         {
//             basket += matrix[i][j];
//         }
//         cout << basket << " ";
//     }

//     return 0;
// }

// int rowSum(){
//     int n,m;
//     cin >> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int basket=0;

//         for (int j = 0; j < m; j++)
//         {
//             basket += matrix[i][j];
//         }
//         cout << basket << " ";
//     }
// }
// test for 10 th and graduation from algotrim
// // Row Product to Array
// int rowProduct(){
//     int n, m;
//     cin >> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }aded siome noters
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int basket = 1;
//         for (int j = 0; j < m; j++)
//         {
//             basket *= matrix[i][j];
//         }
//         cout << basket << " ";
//     }
//     return 0;
// }
// // Diagonal Sums
// int diagonalSums(){
//     int n;
//     cin >> n ;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     int primaryDiagonal = 0;
//     int secondaryDiagonal = 0;
//     for(int i = 0; i < n; i++){
//         primaryDiagonal += matrix[i][i];
//         secondaryDiagonal += matrix[i][n-i-1];
//     }
//     cout << primaryDiagonal << " " << secondaryDiagonal << endl;
//     return 0;
// }
// // Swap Rows and Columns
// int swapRowsAndColumns(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << matrix[j][i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // Diagonal and Above Zeroing
// int diagonalAndAboveZeroing(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i <= j){
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // Count Unique Elements
// //  FALSE
// // int  main(){
// //     int n,m;
// //     cin >> n >> m;
// //     int matrix[n][m];
// //     int newMatrix[n][m];
// //     for(int i = 0; i < n; i++){
// //         for(int j = 0; j < m; j++){
// //             cin >> matrix[i][j];
// //         }
// //     }

// //     int uniqueCount = 0;
// //     for(int i = 0; i < n; i++){
// //         for(int j = 0; j < m; j++){
// //             bool isUnique = true;
// //             for(int k = 0; k < n; k++){
// //                 for(int l = 0; l < m; l++){
// //                     if((i != k || j != l) && matrix[i][j] == matrix[k][l]){
// //                         isUnique = false;
// //                         break;
// //                     }
// //                 }
// //                 if(!isUnique) break;
// //             }
// //             if(isUnique){
// //                 newMatrix[i][j] = matrix[i][j];
// //             }
// //         }

// //     }
// //     cout << uniqueCount << endl;
// //     return 0;
// // }

// // Rows with All Zeros

// int rowszerocount (){
//     int n;
//     cin>>n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin>> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         bool isZeroRow = true;
//         for (int j = 0; j < n; j++)
//         {

//             if (matrix[i][j] != 0)
//             {
//                 isZeroRow = false;
//                 break;
//             }
//         }
//         if (isZeroRow)
//         {
//             cout << i+1 << " ";
//         }
//     }

//     return 0;
// }

// // salam
// int fillmatrix()
// {
//     int matrix[5][6] = {
//         {1, 2, 3, 4, 5, 6},
//         {12, 11, 10, 9, 8, 7},
//         {13, 14, 15, 16, 17, 18},
//         {24, 23, 22, 21, 20, 19},
//         {25, 26, 27, 28, 29, 30}};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int fillmatrix2()
// {
//     //     1  2  3  4  5  6
//     // 7  8  9  10 11 12
//     // 13 14 15 16 17 18
//     // 19 20 21 22 23 24
//     // 25 26 27 28 29 30
//     int matrix[5][6] = {
//         {1, 2, 3, 4, 5, 6},
//         {7, 8, 9, 10, 11, 12},
//         {13, 14, 15, 16, 17, 18},
//         {19, 20, 21, 22, 23, 24},
//         {25, 26, 27, 28, 29, 30}};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int yadmnancixdiadi()
// {
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == matrix[i][j + 1] && j < n - 1)
//             {
//                 cout << i + 1 << " ";
//             }
//             break;
//         }
//     }
//     return 0;
// }

// int maxminnewarr()
// {
//     int n, m;
//     cin >> n >> m;
//     int matrix[n][m];
//     int pushedarray[m]; // sütun sayısı kadar fark tutacağız

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     for (int j = 0; j < m; j++)
//     {
//         int maxVal = matrix[0][j];
//         int minVal = matrix[0][j];

//         for (int i = 1; i < n; i++)
//         {
//             if (matrix[i][j] > maxVal)
//                 maxVal = matrix[i][j];
//             if (matrix[i][j] < minVal)
//                 minVal = matrix[i][j];
//         }

//         pushedarray[j] = maxVal - minVal;
//     }

//     for (int i = 0; i < m; i++)
//     {
//         cout << pushedarray[i] << " ";
//     }

//     return 0;
// }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int matrix[n][n];

// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             cin >> matrix[i][j];
// //         }
// //     }

// //     for (int j = 0; j < n; j++)
// //     {
// //         for (int i = 0, l = n - 1; i < l; i++, l--)
// //         {
// //             if (matrix[i][j] == matrix[l][j])
// //             {
// //                 cout << j + 1 << " ";
// //                 return 0;
// //             }
// //         }
// //     }

// //     return 0;
// // }

#include <string>
#include <iostream>
using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     int matrix[x][x];
//     for(int i = 0; i < x; i++){
//         for(int j = 0; j < x; j++){
//             cin>>matrix[i][j];
//         }
//     }

//     for(int i = 0; i < x; i++){
//         string z="";
//         string y="";
//         for(int j = 0; j < x; j++){
//             z += to_string(matrix[j][i]);

//         }
//         for (int j = x-1; j >= 0; j--)
//         {
//             y += to_string(matrix[j][i]);
//         }
//         if(z == y){
//             cout<<i+1<<" ";
//         }
//     }

//    return 0;
// }

//    Average of Extreme Values
// #include <iomanip>
// int main() {
//     int n, m;
//     cin >> n >> m;

//     double matrix[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     double max = matrix[0][0];
//     double min = matrix[0][0];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] > max) max = matrix[i][j];
//             if (matrix[i][j] < min) min = matrix[i][j];
//         }
//     }

//     double average = (max + min) / 2.0;

//     cout << fixed << setprecision(2) << average << endl;

//     return 0;
// }
// swap max min elemnts rows
// int main() {
//     int n, m;
//     cin >> n >> m;

//     double matrix[n][m];

//     // Matrisi doldur
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int maxRow = 0;
//     int minRow = 0;
//     double maxVal = matrix[0][0];
//     double minVal = matrix[0][0];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] > maxVal) {
//                 maxVal = matrix[i][j];
//                 maxRow = i;
//             }
//             if (matrix[i][j] < minVal) {
//                 minVal = matrix[i][j];
//                 minRow = i;
//             }
//         }
//     }

//     // maxRow və minRow sətrlərini dəyiş
//     for (int j = 0; j < m; j++) {
//         swap(matrix[maxRow][j], matrix[minRow][j]);
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){

//     int n, m;
//     cin >> n >> m;
//     int matrix[n][m];
//     int arrunique[n * m];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             bool isUnique = true;
//             for (int l = 0; l < k; l++) {
//                 if (arrunique[l] == matrix[i][j]) {
//                     isUnique = false;
//                     break;
//                 }
//             }
//             if (isUnique) {
//                 arrunique[k++] = matrix[i][j];
//             }
//         }
//     }

//         cout << k << " ";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int matrix[n][n];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++) {

//             bool isIncreasing = true;
//     bool isDecreasing = true;
//         for (int j = 0; j < n - 1; j++) {
//             if (matrix[i][j] <= matrix[i][j+1]) {
//                 isIncreasing = false;

//             }
//             if (matrix[i][j] >= matrix[i][j+1] ) {
//                 isDecreasing = false;
//         }
//         if (isIncreasing || isDecreasing) {
//             cout << i + 1 << " ";
//         }
//     }

//     return 0;
// }

// int main(){
//     int n,m;
//     cin >> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     int x,y;
//     cin >> x >> y;
//     for (int i = 0; i < n; i++)
//     {
//         swap(matrix[i][x-1], matrix[i][y-1]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     int arr[30] = {  1,  3,  4,  10, 11, 20,
//                        2,  5,  9,  12,19, 21,
//                        6,  8,  13, 18,22, 27,
//                        7,  14, 17, 23,26, 28,
//                        15, 16, 24, 25, 29, 30
//                    };

//     int matrix[5][6];
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 6; j++){
//             matrix[i][j] = arr[i * 6 + j];
//        }
//     }
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 6; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;

// }

// int main(){
//     int arr[49] = {43 ,44 ,45, 46 ,47 ,48 ,49,
//                    42 ,21 ,22 ,23 ,24 ,25 ,26,
//                    41 ,20 ,7  ,8  ,9  ,10 ,27,
//                    40 ,19 ,6  ,1  ,2  ,11 ,28,
//                    39 ,18 ,5  ,4  ,3  ,12 ,29,
//                    38 ,17 ,16 ,15 ,14 ,13 ,30,
//                    37 ,36 ,35 ,34 ,33 ,32 ,31
//                    };

//     int matrix[7][7];
//     for(int i = 0; i < 7; i++){
//         for(int j = 0; j < 7; j++){
//             matrix[i][j] = arr[i * 7 + j];
//        }
//     }
//     for(int i = 0; i < 7; i++){
//         for(int j = 0; j < 7; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;

// }
//  Mirror Matrix Horizontally

// int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//        for (int j = 0; j < n; j++)
//        {
//         cout << matrix[i][j] << " ";

//        }
//          cout << endl;

//     }

//    return 0;
// }
// mirrot vertically
// int main (){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = n-1; j >= 0; j--)
//        {
//         cout << matrix[i][j] << " ";

//        }
//          cout << endl;

//     }

//     return 0;
// }

// mirror diagonally
// int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < n; j++)
//        {
//            cout << matrix[j][i] << " ";
//        }
//        cout << endl;
//     }
//     return 0;
// }

// mirror matrix diagonally secondary
// int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//        for (int j = n-1; j >= 0; j--)
//        {
//            cout << matrix[j][i] << " ";
//        }
//        cout << endl;
//     }
//     return 0;
// }

// Rotate Matrix in Positive Directions

//     int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     cout<<"90 degrees: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n-1; j >= 0; j--)
//         {
//             cout << matrix[j][i] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout<<"180 degrees: "<<endl;
//     for (int i = n-1; i >= 0; i--)
//     {
//         for (int j = n-1; j >= 0; j--)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout<<"270 degrees: "<<endl;
//     for (int i = n-1; i >= 0; i--)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Replace Elements Above and Below Main Diagonal

// int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     int orginalmatrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             orginalmatrix[i][j] = matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i < j)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//    cout << "Above the diagonal:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i > j)
//             {
//                 orginalmatrix[i][j] = 0;
//             }
//         }
//     }
//     cout<<endl;
//     cout << "Below the diagonal:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout  << orginalmatrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Swap Columns with Minimum and Maximum Elements

// int main(){
//     int n,m;
//     cin >> n >> m;
//     int matrix[n][m];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int minCol = 0, maxCol = 0;
//         for (int j = 1; j < m; j++)
//         {
//             if (matrix[i][j] < matrix[i][minCol])
//                 minCol = j;
//             if (matrix[i][j] > matrix[i][maxCol])
//                 maxCol = j;
//         }
//         // Swap the minimum and maximum elements
//       int temp = matrix[i][minCol];
//         matrix[i][minCol] = matrix[i][maxCol];
//         matrix[i][maxCol] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/// test
// int main(){
//     int n;
//     cin >> n;
//     int matrix[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];

//         }//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)

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

    for (int i = 0; i < n; i++)
    {

        int arr[n];
        for (int j = 0; j < n; j++)
        {
            arr[j] = matrix[j][i];
        }
        int reversearr[n];

        for (int j = n - 1; j >= 0; j--)
        {
            reversearr[j] = arr[n - j - 1];
        }
        bool isEqual = true;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] != reversearr[i])
            {
                isEqual = false;
            }
        }

        if (isEqual)
        {
            cout << i + 1 << " ";
        }
    }
    return 0;
}
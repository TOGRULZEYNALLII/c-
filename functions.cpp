#include<iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <array>
#include <tuple>
#include <functional>
using namespace std;

// float functionSPHEREcalculator(float r){
//     // (4/3) * π * r^3, burada "r" yarıçapı temsil eder
//     r= (4.0/3.0) * 3.141592* r * r * r; // π yaklaşık olarak 3.14159
//     return r;
// }
// int cubecalculator(int a){
//     a=a*a*a;
//     return a;
// }
// void Rectanglecalculator(int a, int b,int &s,int &p){
//      s=a*b;
//       p= (2*a)+(2*b);
    
// }
//  float Kmhtomph(long float x){
//     x=x/ 1.6213711922 ;
//     return x;
// }

// int main() { 
//     // int r,d;
//     // cin>>r>>d;
//     // int s;
//     // int p;
//     // Rectanglecalculator(r,d,s,p);
//     // cout<<"The area of the rectangle is: "<<s<<endl;
//     // cout<<"The perimeter of the rectangle is: "<<p<<endl;

//     int x;
//     cin>>x;
//     cout<<Kmhtomph(x)<<"  Miles/hr";
//     return 0;
// }     


// void  avarage(int x,int y,int z,int t,int &count,int &sum ){
//     sum=x+y+z+t;
//     count=sum/4;
// }

// int main() {
//     int x,y,z,t;
//     int sum =0;
//     cin>>x>>y>>z>>t;
//     int count=0;
//     avarage(x,y,z,t,count,sum);
//     cout<<"The total of four numbers is : "<<sum;
//     cout<<"The average of four numbers is : "<<count;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// // ascii printer 
// void asciiPrinter(char x){
//     cout<<"ASCII value of "<<x<<" is: "<<int(x)<<endl;
//     cout<<"The character for the ASCII value "<<int(x)<<" is: "<<x<<endl;
// }
// int main(){
//     char x;
//     cin>>x;
//     asciiPrinter(x);
//     return 0;
// }


// cm to km 
// void cmToKm(float cm){
//     float km = cm / 100000;
//     cout << cm << " cm is equal to " << km << " km." << endl;
// }
// int main (){
//     float cm;
//     cin >> cm;
//     cmToKm(cm);
//     return 0;
// }

// even odd chcker 
// void evenOddChecker(int num) {
//     if (num % 2 == 0) {
//         cout << num << " is even." << endl;
//     } else {
//         cout << num << " is odd." << endl;
//     }
// }
// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     evenOddChecker(num);
//     return 0;
// }

// prime nimber checker
// void primeChecker(int num) {
//     if (num <= 1) {
//         cout << num << " is not a prime number." << endl;
//         return;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             cout << num << " is not a prime number." << endl;
//             return;
//         }
//     }
//     cout << num << " is a prime number." << endl;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     primeChecker(num);
//     return 0;
// }
// // }



// void arra(int x, int y, int z, int t) {
//     int basket = 0;
//     basket += x;
//     basket += y;
//     basket += z;
//     basket += t;
//     cout << basket;
// }

// int main() {
//     int x,y,z,t;
//     cin >> x >> y >> z >> t;


//     arra(x,y,z,t);

//     return 0;
// }
// A message indicating the binary value of the entered decimal number.
// void decimalToBinary(int decimal) {
//     if (decimal == 0) {
//         cout << "0";
//         return;
//     }
//     string binary = "";
//     while (decimal > 0) {
//         binary = to_string(decimal % 2) + binary;
//         decimal /= 2;
//     }
//     cout << "The binary value is: " << binary << endl;
// }

// int main (){
//     int decimal;
//     cin >> decimal;
//     decimalToBinary(decimal);
//     return 0;
// }


// The sum of the series with an appropriate message
// void sumOfSeries(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         int factorial = 1;
//         for (int j = 1; j <= i; j++) {
//             factorial *= j;
//         }
//         sum += factorial/i;
//     }
//     cout<<sum << endl;
// }
// int main() {
//     int n;
//     cin >> n;
//     sumOfSeries(n);
//     return 0;
// }

// A message indicating the largest element in the array.
// void findLargestElement(int arr[], int size) {
//     int largest = arr[0];
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     cout << largest << endl;
// }
// int main() {
//     int x;
//     cin >> x;
//     int arr[x];
//     for (int i = 0; i < x; i++) {
//         cin >> arr[i];
//     }
//     findLargestElement(arr,x);
//     return 0;
// }

// armstong number checker

// void isArmstrong(int num) {
//     int originalNum = num;
//     int sum = 0;
//     int digits = 0;

//     // Count the number of digits
//     while (num > 0) {
//         num /= 10;
//         digits++;
//     }

//     num = originalNum;

//     // Calculate the sum of the cubes of the digits
//     while (num > 0) {
//         int digit = num % 10;
//         sum += pow(digit, digits);
//         num /= 10;
//     }

//     if (sum == originalNum) {
//         cout <<"The "<< originalNum << " is an Armstrong number." << endl;
//     } else {
//         cout << "The " << originalNum << " is not an Armstrong number." << endl;
//     }
// }
// void isPerfect(int num) {
//     int sum = 0;
//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == num) {
//         cout<<"The " << num << " is a perfect number." << endl;
//     } else {
//         cout << "The " << num << " is not a perfect number." << endl;
//     }
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     isArmstrong(num);
//     isPerfect(num);
//     return 0;
// }

// A message indicating the perfect numbers within the specified range.

// void findPerfectNumbers(int start, int end) {
//     cout << "Perfect numbers between " << start << " to " << end << " are: ";
//     for (int num = start; num <= end; num++) {
//         int sum = 0;
//         for (int i = 1; i < num; i++) {
//             if (num % i == 0) {
//                 sum += i;
//             }
//         }
//         if (sum == num) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
// }
// int main() {
//     int start, end;
//     cin >> start >> end;
//     findPerfectNumbers(start, end);
//     return 0;
// }


// string anagram checker 


// Sum Function with Default Arguments 
// #include <iostream>
// using namespace std;

// // Fonksiyon tanımı: 2 zorunlu, 2 opsiyonel parametre
// int sum(int a, int b, int c = 0, int d = 0) {
//     return a + b + c + d;
// }

// int main() {
//     // Örnek girişler:
//     int x, y, c, w;
//     cin >> x >> y >> c >> w;
//     cout << sum(x, y, c, w) << endl; // Output: 0 (default values used)
//     return 0;
// }

// Write three C++ functions: convertToHex, convertToBinary, and convertToOctal. Each function should take an integer as input and return a string representing the number in hexadecimal, binary, and octal formats, respectively.
// void convertToHex(int num) {
//     cout << "Hex: " << uppercase << hex << num << endl;
// }
// void convertToBinary(int num) {
//     string binary = "";
//     if(num == 0) {
//         binary = "0";
//     }else{
//         while (num > 0) {
//             binary = to_string(num % 2) + binary;
//             num /= 2;
//         }
//     }
//     cout << "Bin: " << binary << endl;
// }
// void convertToOctal(int num) {
//     cout << "Oct: " << oct << num << endl;
// }
// int main() {
//     int num;
//     cin >> num;
//  convertToBinary(num);
//     convertToHex(num);
   
//     convertToOctal(num);

//     return 0;
// }

// string convertTo(int num, const string& format = "dec");
void convertToHex(int num) {
    cout << uppercase << hex << num << endl;
}
void convertToBinary(int num) {
    string binary = "";
    if(num == 0) {
        binary = "0";
    }else{
        while (num > 0) {
            binary = to_string(num % 2) + binary;
            num /= 2;
        }
    }
    cout << binary << endl;
}
void convertToOctal(int num) {
    cout <<  oct << num << endl;
}
int main() {
    int num;
    string format;
    cin >> num;
    cin >> format;

    if(format=="hex") {
        convertToHex(num);
    } else if(format=="bin") {
        convertToBinary(num);
    } else if(format=="oct") {
        convertToOctal(num);
    } else {
        cout << "Invalid format specified." << endl;
        return 1; // Exit with an error code
    }

    return 0;
}
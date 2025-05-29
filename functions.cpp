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



void arra(int x, int y, int z, int t) {
    int basket = 0;
    basket += x;
    basket += y;
    basket += z;
    basket += t;
    cout << basket;
}

int main() {
    int x,y,z,t;
    cin >> x >> y >> z >> t;


    arra(x,y,z,t);

    return 0;
}

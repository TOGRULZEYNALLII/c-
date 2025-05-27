#include<iostream>
using namespace std;

float functionSPHEREcalculator(float r){
    // (4/3) * π * r^3, burada "r" yarıçapı temsil eder
    r= (4.0/3.0) * 3.141592* r * r * r; // π yaklaşık olarak 3.14159
    return r;
}
int cubecalculator(int a){
    a=a*a*a;
    return a;
}
void Rectanglecalculator(int a, int b,int &s,int &p){
     s=a*b;
      p= (2*a)+(2*b);
    
}
 float Kmhtomph(long float x){
    x=x/ 1.6213711922 ;
    return x;
}

int main() { 
    // int r,d;
    // cin>>r>>d;
    // int s;
    // int p;
    // Rectanglecalculator(r,d,s,p);
    // cout<<"The area of the rectangle is: "<<s<<endl;
    // cout<<"The perimeter of the rectangle is: "<<p<<endl;

    int x;
    cin>>x;
    cout<<Kmhtomph(x)<<"  Miles/hr";
    return 0;
}     
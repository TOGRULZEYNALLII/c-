#include <iostream>
#include <cstring>
#include <string.h>
#include <algorithm>
using namespace std;

// int Stirngitersinecevir() {
//     string x;
//     getline(cin, x);
//     string y;
//     for (int i =  x.size()-1; i >= 0; i--) {
//         y += x[i];
//     }
//     cout << y << endl;
//     return 0;
// }

// int StringToUpper() {
//     string a;
//     getline(cin, a);
//     string b;
//     for(int i=0;i<a.size();i++){
//         if(a[i]>='A' && a[i]<'Z'){
//             b += a[i]+1;
//         }else if(a[i]>='a' && a[i]<'z'){
//             b += a[i]+1;
//         }else if(a[i]==' '){
//             b += ' ';
//             continue;
//         }else if(a[i]=='Z'){
//             b += 'A';
//         }else if(a[i]=='z'){
//             b += 'a';
//         }else{
//             b += a[i];
//         }
//     }
//     cout << b << endl;

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// ai yardimla
// int main() {
//     string s;
//     getline(cin, s);

//     bool capitalize = true;
//     for (int i = 0; i < s.length(); i++) {
//         if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
//             capitalize = true;
//         } else {
//             if (capitalize && s[i] >= 'a' && s[i] <= 'z') {
//                 s[i] = s[i] - 32;
//             } else if (!capitalize && s[i] >= 'A' && s[i] <= 'Z') {
//                 s[i] = s[i] + 32;
//             }
//             capitalize = false;
//         }
//     }

//     cout << s << endl;
//     return 0;
// }
// sozdeki en uzun kelimeyi bulma hard

// int main()
// {
//   string s;
//   getline(cin, s);
//   string word="";
//   string longest="";
//   for(int i=0;i<s.length();i++){
//     if(s[i]!= ' ' && i<s.length()){
//       word += s[i];
//     }else{
//       if(word.length() > longest.length()){
//         longest = word;
//       }
//       word = ""; 
//     }
//   }
//     if (word.length() > longest.length()) {
//       longest = word;
//       longest = longest.substr(0, longest.length() - 1);
//     }

//   cout << longest << endl;
//   return 0;
// } 

  // palindrome stirng 
  // int main (){
  //   string s;
  //   getline(cin, s);
  //   string word="";
  //   for(int i=s.length()-1;i>=0;i--){
  //     word += s[i];
  //     }
  //     if(word==s){
  //       cout << "True" << endl;
  //     }else{
  //       cout << "False" << endl;
  //     }
  //   return 0;
  // }


  // remove special characters  
  // int main (){

  //   string s;
  //   getline(cin, s);
  //   string word="";
  //   for(int i=0;i<s.length();i++){
  //     if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
  //       word += s[i];
  //     }else if(s[i] == ' '){
  //       word += ' ';
  //     }else if(s[i] == '\n'){
  //       word += '\n';
  //     }
  //   }
  //   cout << word << endl;
  //   return 0;
  // }
  // // test



// stringi alfabetic duzme 
// int main(){
//   string s;
//   getline(cin, s);
//   string word="";
//   for(int i=0;i<s.length();i++){
//     if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
//         word += s[i];
//     }
//   }
//   sort(word.begin(), word.end());
//   cout << word << endl;
//   return 0;
// }

// Count Vowels in a String

// int main (){
//   string s;
//   getline(cin,s);
//   int count=0;
//   for(int i=0;i<s.length();i++){
//     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
//       count++;
//     }
//   }
//   cout <<"number of vowels -> "<< count << endl;
//   return 0;
// }


//  Insert Dash Between Odds
// int main(){
//   string s;
//   getline(cin, s);
//   for(int i=0;i<s.length();i++){
//     cout<<s[i];
//     if(i<s.size()-1){
//      if((s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') &&
//          (s[i+1] == '1' || s[i+1] == '3' || s[i+1] == '5' || s[i+1] == '7' || s[i+1] == '9') &&
//          s[i] != s[i+1]){
//         cout << "-";
//       }
//     }
//   }
//   return 0;
// }


//  array icnde includes
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);  
//     string t;
//     getline(cin, t);

//     bool allFound = true;

//     for (int i = 0; i < t.length(); i++) {
//         bool found = false;
//         for (int j = 0; j < s.length(); j++) {
//             if (t[i] == s[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             allFound = false;
//             break;
//         }
//     }

//     if (allFound)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }




// String Compression

//  to be continue...
int main(){
  string s;
  getline(cin, s);
  string word="";
    int counta=0;
  int countb=0;
  int countc=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a' ){
      counta++;
    }else if(s[i]=='b'){
      countb++;
    }else if(s[i]=='c'){
      countc++;
    }
  }
  word += 'a'+ to_string(counta);
  word += 'b'+ to_string(countb);
  word += 'c'+ to_string(countc);

  cout << word << endl;
  return 0;
}




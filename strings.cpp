#include <iostream>
#include <cstring>
#include <string.h>
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


  // remove special characters  sehv
  int main (){

    string s;
    getline(cin, s);
    string word="";
    for(int i=0;i<s.length();i++){
      if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
        word += s[i];
      }else{
        word += ' ';
      }
    }
    cout << word << endl;
    return 0;
  }

  // test  
#include <bits/stdc++.h>
using namespace std;

int main(){
     long long n ; 
     cin >> n ; 
     string str = to_string(n) ;
     long long ans = LLONG_MAX ;  
     for(int i = 0 ; i < str.size() ; i++){
          if(i == 0 && str[0] == '9'){
               continue ; 
          }
          int original_digit = str[i] - '0' ; 
          int new_digit = 9 - original_digit ;
          if(new_digit < original_digit){
               str[i] = new_digit + '0';
               
          } 
     }
     cout << str ;  
     return 0;
}
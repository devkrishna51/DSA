#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; 
    cin >> t ; 
    while(t--){
        string str ; 
        cin >> str ; 
        int left = 0 , right = 0 ;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == '1'){
                left = i ; 
                break ; 
            }
        }
        for(int i = str.size()-1 ; i >= 0 ; i--){
            if(str[i] == '1'){
                right = i ;
                break ; 
            }
        }
        int count =0 ; 
        for(int i = left ; i < right ; i++){
            if(str[i] == '0'){
                count++ ; 
            }
        }
        cout << count << endl ; 
    }   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    bool firstIsUpper = false;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(i == 0 && isupper(str[0])){
            firstIsUpper = true ; 
        }
        else if(i != 0 && isupper(str[i])){
            count ++ ; 
        }
    } 
 
    if(firstIsUpper != true && str.size()==1){
        str[0] = toupper(str[0]) ; 
        cout << str ; 
        return 0 ; 
    }
    if(firstIsUpper != true && count == str.size()-1){
        str[0] = toupper(str[0]) ; 
        for(int i = 1 ; i < str.size() ; i++){
            str[i] = tolower(str[i]) ; 
        }
        cout << str  ; 
        return 0 ; 
    }
    if(firstIsUpper == true && count == str.size()-1){
        for(int i = 0 ; i < str.size() ; i++){
            str[i] = tolower(str[i]) ; 
        }
        cout << str  ; 
        return 0 ; 

    }
    if(firstIsUpper == true && count == 0){
        cout << str ;
        return 0 ; 
    }
    cout << str ;


    return 0;
}
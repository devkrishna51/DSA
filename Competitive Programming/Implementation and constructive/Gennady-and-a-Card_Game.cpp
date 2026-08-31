#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string str ; 
    cin >> str  ;

    unordered_set<char> ch1 ; 
    unordered_set<char> ch2 ; 
    for(int i = 0 ; i < 5 ; i++){
        string temp ; 
        cin >> temp ; 
        ch1.insert(temp[0]) ; 
        ch2.insert(temp[1]) ; 

    }

    if(ch1.count(str[0])){
        cout << "YES" ; 
        return 0 ; 
    }
    if(ch2.count(str[1])){
        cout << "YES" ; 
        return 0 ; 
    }
    cout << "NO"; 
    return 0;
}
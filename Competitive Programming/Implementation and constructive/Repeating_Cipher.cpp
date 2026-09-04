#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n ; 
    string str ; 
    cin >> str ; 
    string result ; 
    int count = 1 ; 
    for(int i = 0 ; i < str.size() ; ){
        result.push_back(str[i]) ; 
        i =i + count ; 
        count ++ ; 
    }
    cout << result ; 

    return 0;
}
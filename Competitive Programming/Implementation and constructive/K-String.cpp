#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k ; 
    string str;
    cin >> str;
    unordered_map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    for(auto x : mp){
        if(x.second % k != 0){
            cout << '-1' ; 
            return 0 ; 
        }
    }
    string temp ; 
    for(auto x : mp){
        int a = x.second / k ; 

        for(int i = 0 ; i < a ; i++){
            temp.push_back(x.first) ; 
        }
    }
    
    for(int i = 0 ; i < k ; i++)
    {
        cout<<temp ; 
    }
    return 0;
}
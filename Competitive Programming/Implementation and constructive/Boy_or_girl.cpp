#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string temp ; 
    cin >> temp ; 
    unordered_set<char> st ;
    int count = 0 ;  
    for(int i = 0 ; i < temp.size() ; i++){
        if(st.find(temp[i]) == st.end()){
            st.insert(temp[i]) ; 
            count ++ ; 
        }
    }
    if(count % 2 ==0){
        cout << "CHAT WITH HER!" ; 
    }
    else{
        cout << "IGNORE HIM!" ; 
    }


    return 0;
}
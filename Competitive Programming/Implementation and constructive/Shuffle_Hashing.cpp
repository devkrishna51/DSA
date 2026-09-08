#include<bits/stdc++.h>
using namespace std ; 
int main(){
   
    int t ; 
    cin >> t ; 
    while(t-- ){
        string p , h ; 
        cin >> p >> h ; 
        sort(p.begin() , p.end()) ; 
        int n = p.size() ; 
        int n2 = h.size() ; 
        bool flag = false ;
        for(int i = 0; i  < n2 ; i++){
            string temp = h.substr(i , n) ; 
            sort(temp.begin() , temp.end()) ; 
            if(temp == p) {
                flag = true ; 
                break ; 
            } 

        }
        if(flag)
            cout << "YES" <<endl ; 
        else   
            cout << "NO" << endl ;
    }

    return 0 ; 
}
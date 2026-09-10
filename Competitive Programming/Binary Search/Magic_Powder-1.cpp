#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int n , k ; 
    cin >> n  >> k ; 
    vector<long long> a , b ; 
    for(int i = 0;  i < n ; i++){
        int x ; 
        cin >> x ; 
        a.push_back(x) ; 

    }
    for(int i = 0 ; i < n ; i++){
        int x ; 
        cin >> x ; 
        b.push_back(x) ; 
    }

    long long countCookies = 0 ; 

    long long low = 0 , high = 1e7  , answer = 0 ;
    while(low <= high){
        long long mid = (low + high) /2 ;
        
        vector<long long> need(n) , buy(n) ;
        for(int i = 0 ; i < n ; i++){
            need[i] = a[i] * mid ; 
         } 
         for(int i = 0 ; i < n ; i++){
            buy[i] = max(0LL , need[i] - b[i]) ;
         }
         long long cost = 0 ; 
         for(int i = 0 ; i < n ; i++){
            cost += buy[i] ; 
         }
         if(cost <= k){
            answer = max(answer , mid) ; 
            low = mid+1 ; 
         }
         else{
            high = mid-1 ; 
         }


    } 
    countCookies += answer ; 
    cout << countCookies ; 
    return 0 ;
}
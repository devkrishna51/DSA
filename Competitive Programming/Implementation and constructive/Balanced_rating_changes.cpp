#include <bits/stdc++.h>
using namespace std;
vector<int> ans ; 
void solve(vector<int> &arr , int i){

    
  
    if(i >= arr.size()){
        int sum = 0; 
        for(auto x : ans){
            sum += x ; 

        } 
        if(sum == 0){
        
            for(auto x : ans){
                cout <<x << endl ; 
            }
            exit(0) ;
        }
       
            return  ; 
    }

    int floorValue = floor(arr[i]/2.0);  
    ans.push_back(floorValue) ;
    solve(arr , i+1 ) ; 
    ans.pop_back() ; 
    
    int ceilValue = ceil(arr[i]/2.0) ; 
    ans.push_back(ceilValue);
    solve(arr , i+1 ) ; 
    ans.pop_back() ; 

}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    solve(arr , 0 );
  
    

    return 0;
}
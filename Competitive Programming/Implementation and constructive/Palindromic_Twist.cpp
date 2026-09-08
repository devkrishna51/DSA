#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        string str ; 
        cin >> str ; 

        int left = 0 ; 
        int right = n-1 ; 
        bool flag = false ;
        while(left <= right){
            if((int)str[left] == (int)str[right]){
                left++ ; 
            right-- ; 
                continue ; 
            }
            else if((int)str[left]+1 == (int)str[right]-1){
                left++ ; 
            right-- ; 
                continue ; 
            }
            else if((int)str[left]-1 == (int)str[right]+1){
                left++ ; 
            right-- ; 
                continue ; 
            }
            else {
                flag = true ; 
                break ; 
            } 
        }
        if(flag){
            cout << "NO" <<endl ; 
        }else{
            cout << "YES" <<endl ; 
        }
    }
  
    return 0 ; 
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n; i++){
        int ele = arr[i];  
        bool xCheck = true ; 
        bool yCheck = true ; 
        int j = i-1 ; 
        int j2 = i+1 ; 
        int count = 1 ;
        while(j >= 0 && count <= x){
            if(ele < arr[j]){
                xCheck = true ; 
            }
            else{
                xCheck = false ; 
                break ; 
            }
            j-- ; 
            count ++ ; 
        }
        while(j2 < n && j2 <= i+y){
            if(ele < arr[j2]){
                yCheck = true ; 
            }
            else{
                yCheck = false ; 
                break ; 
            }
            j2++ ; 
        }
        if(xCheck && yCheck){
            cout << i+1 ; 
            break ; 
        }
    }

        return 0;
}
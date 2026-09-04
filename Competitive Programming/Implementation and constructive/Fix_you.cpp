#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; 
    cin >> t ; 
    while(t--){
        int n , m ; 
        cin >> n >> m ; 
        vector<vector<char>> arr(n , vector<char> (m)) ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                char ch ; 
                cin >> ch ; 
                arr[i][j] = ch ; 
            }
        }
        int downCount = 0 , rightCount = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(arr[i][m-1] == 'R'){
                rightCount ++ ; 
            }

        }
        for(int j = 0 ; j < m ; j++){
            if(arr[n-1][j] == 'D'){
                downCount++; 
            }
        }
        cout << downCount + rightCount <<endl ; 
    } 

    return 0;
}
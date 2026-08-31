#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b ; 
    cin >> a >> b ; 
    int count = 0; 
    while(true){
       
        count++ ; 
        a = a * 3 ; 
        b = b * 2 ; 
        if(a > b){
            break ;
        }
    }
    cout << count ; 


    return 0;
}
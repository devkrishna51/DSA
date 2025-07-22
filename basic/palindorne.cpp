#include<iostream>
using namespace std;
int main()
{
    int n = 122;
    int ori = n ;
    int rev = 0 ;
    while(n>0){
        int d = n %10;
        rev = rev * 10 +d ;
        n /=10;
    }
    if(ori == rev){
        cout << "no are palindorme" <<endl;
    
    }
    else{
        cout << "no are not palindorme";    }
    return 0;
}
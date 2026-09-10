#include <bits/stdc++.h>
using namespace std;
bool check(int p, long long rupees)
{
    if (p <= rupees)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string recipe;
    cin >> recipe;
    int nb, ns, nc, pb, ps, pc;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    long long rupees;
    cin >> rupees;

    int b = 0, s = 0, c = 0;
    for (auto x : recipe)
    {
        if (x == 'B')
            b++;
        else if (x == 'S')
            s++;
        else
            c++;
    }
    long long countBurgers = 0;
    long long low = 0 , high = 1e13  ,answer = 0; 
    while(low <= high){
        long long mid = (low + high)/2;

        long long needB = mid * b ; 
        long long needS = mid * s ; 
        long long needC = mid * c ; 

        long long buyB = max(0LL , needB - nb) ;  
        long long buyS = max(0LL , needS - ns) ;  
        long long buyC = max(0LL , needC - nc) ;
        
        long long cost = (buyB * pb) + (buyS * ps) + (buyC * pc);

        if(cost <= rupees){
            answer = max(answer , mid) ; 
            low = mid+1 ; 
        }
        else{
            high = mid-1 ; 
        }
    }
    countBurgers += answer ; 
    cout << countBurgers <<endl  ; 
 

    return 0;
}
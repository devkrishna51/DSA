#include<iostream> 
using namespace std ; 
int main()
{
       int arr[] = {3,-4,5,4,-1,7,-8};
     int currsum = 0 , maxsum = -100000  ; 
     for(int i = 0 ; i < sizeof(arr) /sizeof(arr[0]) ; i++)
     {
        currsum += arr[i] ; 
        if(currsum > maxsum)
        {
           maxsum = currsum ; 
        }
        if(currsum < 0)
        {
            currsum = 0 ; 
        }
     }
     cout << "the maximum sum of sub array is : " << maxsum ; 

    return 0;
}
#include <iostream>
using namespace std;
void sortColours(int arr[])
{
    int count0 = 0 , count1= 0 , count2= 0 ;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(arr[i] == 0)
        {
            count0++ ;
        }
        else if(arr[i] == 1)
        {
            count1++ ;
        }
        else{
            count2++ ;
        }

    }
    int j = 0 ;
    while(count0--){
        arr[j++] = 0 ;
    }
    while(count1--)
    {
        arr[j++] = 1 ; 
    }
    while(count2--)
    {
        arr[j++] = 2 ; 
    }

}
int main()
{
    int arr[10] = {1,1,1,0,0,0,2,2,2,0} ;
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << arr[i] << " "; 
    
    }
    sortColours(arr); 
    cout << endl <<"After Sorted : " ; 
       for(int i = 0 ; i < 10 ; i++)
    {
        cout << arr[i] << " "; 
    
    }


}
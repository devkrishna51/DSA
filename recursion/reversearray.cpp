#include<iostream>
using namespace std ;
void reverse(int arr[] ,int  s ,int e)
{
    if(s>=e)
    {
        return ;
    }
    int temp = arr[s];
    arr[s] = arr[e-1];
    arr[e-1] = temp ;

    reverse(arr,s+1 , e-1);

}
int main()
{
    int arr[5] = {1,2,3,4,5};
    reverse(arr,0,5);
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << arr[i] << "  ";
    }
 
    return 0;
}
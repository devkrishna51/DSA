#include <iostream>
using namespace std;
void revearray(int arr[], int i =0 , int j = 4)
{

    if (j < i)
    {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp;
    revearray(arr, i + 1, j - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;
    for (int j = 0; j < 5; j++)
    {
        std ::cout << arr[j] << "   ";
    }
    cout << "\nRevesered array : " << endl;
    revearray(arr);
    for (int i = 0; i < 5; i++)
    {
        std ::cout << arr[i] << "  ";
    }
    // while(start < end)
    // {
    //     int temp = arr[start] ;
    //     arr[start]= arr[end];
    //     arr[end] = temp ;
    //     start++;
    //     end--;
    // }
    // for(int i =0 ; i < 5 ; i ++)
    // {
    //     cout << arr[i] << " "  ;
    // }
    return 0;
}
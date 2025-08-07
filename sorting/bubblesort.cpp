// Bada number ko bubble (foam) ki tarah upar laate hain (yaani end tak).
// Har step me adjacent (bagal wale) elements ko compare karke, agar galat order me hai toh swap (badal) kar dete hain.
#include <iostream>
using namespace std;
int main()
{
     int arr[4] = {5, 2, 4, 1};
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3 - i; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
          }
     }
     for (int k = 0; k < 4; k++)
     {

          cout << arr[k] << "   " ;  
     }
     return 0;
}

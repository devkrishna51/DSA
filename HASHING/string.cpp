#include <iostream>
using namespace std;
int main()
{
    string name[5];
    string hashtable[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " name : ";
        getline(cin, name[i]);
        int hash = 0;
        for (int j = 0; j < name[i].length(); j++)
        {
            hash += name[i][j];
        }
        int index = hash % 10;

        hashtable[index] = name[i];
    }

    cout << "\nHash table \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Index " << i << "   -> " << hashtable[i] <<endl ; 
    }
    return 0;
}
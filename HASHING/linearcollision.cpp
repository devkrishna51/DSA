#include <iostream>
using namespace std;

int main()
{
     string name[5];
     int age[5];
     int hash[10] = {0};

     for (int i = 0; i < 5; i++)
     {
          cout << "\nEnter name: ";
          cin.ignore();
          getline(cin, name[i]);

          cout << "Enter age: ";
          cin >> age[i];

          int index = age[i] % 10;

          while (hash[index] != 0)
          {
               index = (index + 1) % 10;
          }
          hash[index] = i;
     }
     int search;
     cout << "\nEnter age to search: ";
     cin >> search;

     int index = search % 10;
     int found = 0;

     for (int i = 0; i < 10; i++)
     {
          int check = (index + i) % 10;
          if (hash[check] != 0 && age[hash[check]] == search)
          {
               cout << "\nStudent found:" << endl;
               cout << "Name: " << name[hash[check]] << endl;
               cout << "Age: " << age[hash[check]] << endl;
               found = 1;
               break;
          }
     }

     if (found == 0)
     {
          cout << "\nStudent not found.\n";
     }

     return 0;
}

#include<iostream>
using namespace std ; 
int main()
{
     string name[5] ; 
     int rollno[5] ; 
     int hashtable[10] ; 

     for(int i = 0 ; i <5 ; i++)
     {
          cout << "\nEnter the name :  " ; 
          cin.ignore();
          getline(cin,name[i]) ; 

          cout << "\nenter the roll no : " ; 
          cin >> rollno[i] ; 

          int index= rollno[i] % 10 ; 

          hashtable[index] =  i ; 
     }

     int search ; 
     cout <<"\n\nenter a roll no to find : "; 
     cin >> search ; 

     int searchindex = search % 10 ; 
     int studentindex = hashtable[searchindex] ; 

     cout << "\n\nThe student name is : " << name[studentindex] <<endl ; 
     cout << "the roll no is : " << rollno[studentindex] ; 
     return 0 ; 
}
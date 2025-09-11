#include<iostream>
using namespace std ; 
class Node 
{
     public :
          int data ; 
          Node *next = nullptr ; 

};
int main()
{
     Node n1 ,n2,n3 ; 
     n1.data = 1 ; 
     n2.data = 2 ; 
     n3.data = 3 ; 

     Node *head = &n1 ; 
     n1.next = &n2 ; 
     n2.next = &n3; 
     n3.next = nullptr ; 

     while(head != nullptr)
     {
          cout << head->data << "  "; 
          head = head->next ;
     }

      return 0 ; 
}

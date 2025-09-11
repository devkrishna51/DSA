#include<iostream>
using namespace std ;
struct Node
{
     int data ; 
     Node *next = nullptr ; 
};
 
int main()
{

     Node n1 ,n2, n3 ; 
     n1.data = 10 ; 
     n2.data = 20 ; 
     n3.data =30 ;  

     n1.next = &n2 ; 
     n2.next = &n3 ; 
     n3.next = nullptr ; 

     Node *head = &n1 ;
     while(head != nullptr)
     {
          cout<< head->data << "   " ; 
          head =head->next ;
     }
     return 0 ;
}
#include<iostream>
using namespace std ; 
struct Node
{
     int data ; 
     Node *next ; 
     Node (int n)
     {
          data = n ; 
          next = nullptr ; 
     }
};
Node *head = nullptr ; 
Node *tail = nullptr ; 

void push_front(int n)
{
     Node *newNode = new Node(n) ; 
     if(head == nullptr)
     {
          head = tail = newNode ; 
     }
     else{
          newNode->next = head ; 
          head = newNode ; 
     }
}
void print()
{
     Node *temp = head ; 
     while(temp != nullptr)
     {
          cout << temp->data << "   -> " ;
          temp = temp->next ; 
     }
     cout << "Null" << endl ; 
}
int main(){
   
     push_front(10) ; 
     push_front(20) ; 
     push_front(30) ; 
     push_front(40) ; 
     push_front(50) ;
     
     print() ;
       return 0 ;
}

#include<iostream>
using namespace std ; 
class Node
{

          public :
          int data ; 
          Node *next ; 
          Node(int n)
          {
               data = n ; 
               next = nullptr ; 
          }
};
class List 
{
     Node *head ; 
     Node *tail  ;
     public :
     List()
     {
          head= nullptr ; 
          tail = nullptr ; 
     } 
     void push_back(int n)
     {
          Node *newNode = new Node(n) ; 
          if(head == nullptr  && tail ==nullptr )
          {
               head= tail = newNode ; 
          }
          else{
               tail->next = newNode ; 
               tail = newNode ; 
          }
     }
     void push_front(int n){
          Node *newNode = new Node(n) ; 
          if(head == nullptr )
          {
               head= tail = newNode ;
          
          }
         
          else{
               newNode->next = head ; 
               head =newNode ; 
          }
     }
     void print()
     {
          Node *temp = head ; 
          while(temp != nullptr)
          {
               cout << "[" << temp->data << "]" << "  ->   "; 
               temp = temp->next ; 
          }
          cout << "   N U L L  " <<endl ;
     }

};
int main()
{
     List l1 ; 
     l1.push_back(10) ; 
     l1.push_back(20) ; 
     l1.push_front(9) ; 
     l1.push_front(8) ; 
     l1.print();
     return 0 ;
}
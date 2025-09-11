#include <iostream>
using namespace std;
class Node
{
public:
     int data;
     Node *next = nullptr;
     Node (int n)
     {
          data = n ; 
          next = nullptr  ;
     }
};
class List 
{
     Node *head ; 
     Node *tail ;
     public :
          List()
          {
               head = nullptr ; 
               tail = nullptr ; 
          } 
         void push_back(int n)
         {
               Node *newNode = new Node(n) ; 
               if(tail == nullptr && head == nullptr)
               {
                    head = tail = newNode ; 
               }
               else{
                    tail->next = newNode ;
                    tail = newNode ;  
               }
         }
         void print()
         {
               Node *temp = head ; 
               while(temp != nullptr)
               {
                    cout << temp->data << " -> "  ;
                    temp = temp->next ; 
               }
               cout << "Null" <<endl ;
         }

};
int main()
{    
     List l1 ; 
     l1.push_back(1);
     l1.push_back(2);
     l1.push_back(3);
     l1.print();

     return 0;
}

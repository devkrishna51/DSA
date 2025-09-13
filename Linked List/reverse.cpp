#include <iostream>
using namespace std;
struct Node
{
     int data;
     Node *next;
     Node(int n)
     {
          data = n;
          next = nullptr;
     }
};
class Solution
{
     public:
     Node *reversedList(Node *head)
     {
          Node *prev = nullptr;
          Node *curr = head;
          Node *next = nullptr;
          while (curr != nullptr)
          {
               next = curr->next; 
                curr->next  = prev; 
                prev = curr ; 
                curr = next ; 
          }
          return prev  ;
     }
   
};
void printList(Node* head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{    
     Node n1(10) ; 
     Node n2(20) ; 
     Node n3(30) ; 
     Node n4(40) ;
     
     n1.next = &n2 ;
     n2.next = &n3 ;
     n3.next = &n4 ;
     n4.next = nullptr  ;
     Node *head = &n1 ; 
     printList(head);
    
    Solution s1;
    Node *reveHead = s1.reversedList(head);

    cout << "Reversed List: ";
    printList(reveHead);


     return 0;
}
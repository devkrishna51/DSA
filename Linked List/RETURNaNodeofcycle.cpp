#include <iostream>
using namespace std;
class Node
{
public:
     int data;
     Node *next;
     Node(int n)
     {
          data = n;
          next = nullptr;
     }
};
class list
{
     Node *head;
     Node *tail;

public:
     list()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push_front(int n)
     {
          Node *newNode = new Node(n);
          if (head == nullptr)
          {
               head = tail = newNode;
          }
          else
          {
               newNode->next = head;
               head = newNode;
          }
     }
};
class Solution {
public:
    Node* detectCycle(Node* head) {

        bool check = false ; 
        Node * slow = head ; 
        Node * fast = head ;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next ; 
            fast= fast->next ->next ; 
            if(slow == fast)
            {
                check = true ;
                break ;
            }
        } 
        if(check == true)
        {   
            slow = head ; 
            while(slow != fast)
            {
                slow = slow->next ; 
                fast = fast->next ; 
            }
            return slow ;
        }
       
            return nullptr ;    
    }
};  

int main()
{
     list l1 ; 
     l1.push_front(10) ;
     l1.push_front(20) ;
     l1.push_front(30) ;
     l1.push_front(40) ;
     l1.push_front(50) ;
     l1.push_front(60) ;
     return 0;
}
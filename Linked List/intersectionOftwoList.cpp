#include <iostream>
#include <unordered_set>
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
class List
{
public:
     Node *head;
     Node *tail;
     List()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push(int n)
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
class Solution
{
public:
     Node *getTheNODe(Node *headA, Node *headB)
     {
          unordered_set<Node *> hash;
          Node *temp = headA;
          Node *s = headB;
          while (temp != nullptr)
          {
               hash.insert(temp);
               temp = temp->next;
          }
          while (s != nullptr)
          {
               if (hash.find(s) != hash.end())
               {
                    return s;
               }
               s = s->next;
          }
          return nullptr;
     }
} ;
int main()
{
     List l1 ; 
     l1.push(10) ;
     l1.push(20) ;
     l1.push(30) ;
     l1.push(40) ;

     List l2 ; 
     l2.push(10)  ;

     Solution s1 ; 
     s1.getTheNODe(l1.head , l2.head) ; 
     
     return 0;
}
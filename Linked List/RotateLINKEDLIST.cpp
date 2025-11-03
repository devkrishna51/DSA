#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
     int data;
     Node *next = nullptr;
     Node(int n)
     {
          data = n;
          next = nullptr;
     }
};
class list
{

public:
     Node *head;
     Node *tail;
     list()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push_back(int n)
     {
          Node *newNode = new Node(n);
          if (tail == nullptr && head == nullptr)
          {
               head = tail = newNode;
          }
          tail->next = newNode;
          tail = newNode;
     }
     void print()
     {
          Node *temp = head;
          while (temp)
          {
               cout << temp->data << " -> ";
               temp = temp->next;
          }
          cout << "NULL " << endl;
     }
};
class Solution
{
     public : 
     Node *rotatedList(Node *head, int k)
     {
          vector<int> hash;
          Node *temp = head;
          while (temp)
          {
               hash.push_back(temp->data);
               temp = temp->next;
          }
          int n = hash.size();
          for (int i = 0; i < k; i++)
          {
               int last = hash[n - 1];
               for (int i = n - 1; i >= 0; i--)
               {
                    hash[i + 1] = hash[i];
               }
               hash[0] = last;
          }
          Node *newHead = new Node(hash[0]);
          Node *curr = newHead;
          for (int i = 1; i < n; i++)
          {
               curr->next = new Node(hash[i]);
               curr = curr->next;
          }
          return newHead;
     }
};

int main()
{
     list l1;
     l1.push_back(10);
     l1.push_back(20);
     l1.push_back(30);
     l1.push_back(40);
     l1.push_back(50);
     l1.print();
     cout << endl;

     Solution s1 ; 
     Node *check = s1.rotatedList(l1.head , 2) ; 
     while(check)
     {
          cout <<check->data << " -> ";
          check = check->next ;  
     }
     cout << "NULL " <<endl ; 
     return 0;
}
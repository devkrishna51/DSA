#include <iostream>
#include <vector>
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
          if (head == nullptr && tail == nullptr)
          {
               head = tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
          }
     }
     void print()
     {
          Node *temp = head;
          while (temp != nullptr)
          {
               cout << "[" << temp->data << "]" << "   ->   ";
               temp = temp->next;
          }
          cout << " NULL " << endl;
     }
     void reverse()
     {
          Node *prev = nullptr;
          Node *curr = head;
          Node *next = nullptr;
          while (curr != nullptr)
          {
               next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = next;
          }
          head = prev;
     }
};
class Solution
{

public:
     bool checkPalindrome(Node *head)
     {
          Node *temp = head;
          int i = 0;
          vector<int> hash;
          while (temp != nullptr)
          {
               hash.push_back(temp->data);
               i++;
               temp = temp->next;
          }

          Node *prev = nullptr;
          Node *curr = head;
          Node *next = nullptr;

          while (curr != nullptr)
          {
               next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = next;
          }
          head = prev;
          Node *temp2 = head;
          int j = 0;
          while (temp2 != nullptr)
          {
               if (hash[j] == temp2->data)
               {
                    j++;
                    temp2 = temp2->next;
               }
               else
               {
                    return false;
               }
          }
          return true;
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
     l1.push_back(60);
     l1.print();
     l1.reverse();
     l1.print();
     Solution s1 ; 
    bool check =  s1.checkPalindrome(l1.head) ; 
     if(check == true)
     {
          cout << "\nList is Palindrome"<<endl ;
     }
     else{
          cout << "\nList is not palindrome" ; 
     }
     return 0;
}
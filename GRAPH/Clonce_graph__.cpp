#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node
{
public:
     int val;
     vector<Node *> neighbors;
     Node()
     {
          val = 0;
          neighbors = vector<Node *>();
     }
     Node(int _val)
     {
          val = _val;
          neighbors = vector<Node *>();
     }
     Node(int _val, vector<Node *> _neighbors)
     {
          val = _val;
          neighbors = _neighbors;
     }
};

class Solution
{
     void DFS(Node *node, Node *clone, unordered_map<Node *, Node *> &mp)
     {

          for (auto n : node->neighbors)
          {

               if (mp.find(n) == mp.end())
               {
                    Node *CloneCopy = new Node(n->val);
                    mp[n] = CloneCopy;
                    clone->neighbors.push_back(CloneCopy);
                    DFS(n, CloneCopy, mp);
               }
               else
               {

                    clone->neighbors.push_back(mp[n]);
               }
          }
     }

public:
     Node *cloneGraph(Node *node)
     {

          if (node == NULL)
          {
               return nullptr;
          }
          unordered_map<Node *, Node *> mp;

          Node *clone = new Node(node->val);
          mp[node] = clone;
          DFS(node, clone, mp);
          return clone;
     }
};
int main()
{
     Node *n1 = new Node(1);
     Node *n2 = new Node(2);
     Node *n3 = new Node(3);
     Node *n4 = new Node(4);

     n1->neighbors = {n2, n4};
     n2->neighbors = {n1, n3, n4};
     n3->neighbors = {n2, n4};
     n4->neighbors = {n1, n2, n3};

     Solution obj;
     Node *clone = obj.cloneGraph(n1);
     cout << "Clone Node: " << clone->val << endl;

     for (auto x : clone->neighbors)
     {
          cout << x->val << " ";
     }
     cout << endl;
     
     return 0;
}
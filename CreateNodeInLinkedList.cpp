#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main()
{
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();
    
    
    Node1->data = 10;
    Node2->data = 20;
    Node3->data = 30;
    
    Node1->next= Node2;
    Node2->next= Node3;
    Node3->next = NULL;
    
   Node* temp = Node1;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   }
}
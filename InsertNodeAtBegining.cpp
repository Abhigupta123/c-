#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertAtBegining(Node* &head,int d)
{
    Node* temp = new Node();
    temp->data = d;
    temp->next = head;
    head = temp;
    
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
int main()
{
   Node* Node1 = new Node();
   Node1->data=10;
   Node1->next=NULL;
   
   Node* head = Node1;
   print(head);
   insertAtBegining(head,12);
   print(head);
   insertAtBegining(head,15);
      print(head);

   
  
}
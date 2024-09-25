#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertAtEnd(Node* &head,int d)
{
    Node* newnode = new Node();
    newnode ->data = d;
    newnode->next = NULL;
    
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
    
}
void deletefromBegining(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
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
   Node* tail = Node1;

  print(head);
  insertAtEnd(head,12);
  print(head);
  insertAtEnd(head,15);
      print(head);
  insertAtEnd(head,20);
      print(head);
  insertAtEnd(head,25);
      print(head);
  insertAtEnd(head,45);
      print(head);
  insertAtEnd(head,55);
      print(head);
  insertAtEnd(head,65);
      print(head);
  insertAtEnd(head,75);
      print(head);
      
deletefromBegining(head);
print(head);

   
 
  
}
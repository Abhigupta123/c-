#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    
Node (int data1 , Node* next1 , Node* back1)
{
    data = data1;
    next = next1;
    back = back1;
}

Node(int data1)
{   data= data1;
    next = NULL;
    back = NULL;
    
}

};

Node* ArraytoDLL(int arr[],int n)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<n;i++)
    {
        Node* temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev = temp;
        
    }
    return head;
    
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    Node* head = ArraytoDLL(arr,n);
    while(head!=NULL){
    cout<<head->data;
    head = head->next;
    }
    
}
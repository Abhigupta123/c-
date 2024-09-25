#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertelemet(Node* &root,int d)
{
    Node* temp = new Node();
    temp->data = d;
    temp->next = root;
    root = temp;
}
Node* ArraytoLL(int arr[],int n)
{
    Node* root=NULL;
    for(int i=0;i<n;i++)
    {
        insertelemet(root,arr[i]);
    }
    return root;
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
    Node* root = ArraytoLL(arr,n);
    while(root!=NULL){
    cout<<root->data;
    root = root->next;
    }
    
}
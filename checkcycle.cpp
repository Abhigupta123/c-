#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1)
    {
        data=data1;
        next= NULL;
    }
};

bool iscycle(Node* &head)
{
    unordered_set<Node*>st;
    while(head->next!=NULL){
        if(st.find(head)!=st.end())
    {
        return true;
    }
    else
    st.insert(head);
    
    head = head->next;
    }
    return false;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    // head->next->next->next->next->next =head;
    
    cout<<iscycle(head);
    
}
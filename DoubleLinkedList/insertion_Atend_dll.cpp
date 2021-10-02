#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};
void traverForward(Node*node){
    while(node!=NULL){
        cout<<node->data<< " ";
        node=node->next;
    }
    cout<<"\n";
}
void traverBackward(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->prev;
    }
    cout<<"\n";
}

void insertAtEnd(Node *&head,int data){
    Node *newNode=new Node(data);
    Node *node =head;
    while (node->next!=NULL )
    {
        node = node->next;
    }
    node->next = newNode;
    newNode->prev=node;
}
int main(){
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    

    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;
    
    d->next=NULL;
    d->prev=c;

    cout<<"Before Insertion : ";
    traverForward(head);
    
    insertAtEnd(head,50);
    
    cout<<"After Insertion : ";
    traverForward(head);
}

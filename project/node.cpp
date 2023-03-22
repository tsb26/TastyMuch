#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next= NULL ;
    }

  
    public:
    void print(Node *head){
        Node* temp=head;
         while(temp != NULL){
            cout<<temp-> data<<" ";
            temp=temp-> next;
         }
    }
};


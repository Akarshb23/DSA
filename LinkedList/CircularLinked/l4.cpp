// lecture 4
// insert at end of a circular linked list 

#include<bits/stdc++.h>
using namespace std ;

struct Node{
public:
    int data ;
    Node * next ;
    Node (int val){
        data = val;
        next =  NULL ;
    }
};

Node * insertAtEnd(Node * head , int x){
    Node * temp = new Node(x);
    if(head==NULL){
        temp->next =  temp;
        return temp;
    }
    else{
        Node * curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp ;
        temp->next = head;
        return head;
    }
    
}


void traverse(Node * head){
    if(head==NULL)
        return ;
    cout << head->data << " ";
    for(Node * p = head->next ; p != head ; p = p->next){
        cout << p->data << " ";
    }
}


int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    Node * temp3 = new Node(40);
    Node * temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3 ;
    temp3->next = temp4;
    temp4->next = head ;
    head = insertAtEnd(head,60);
    traverse(head);
    return 0 ;
}
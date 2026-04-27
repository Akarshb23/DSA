// lecture 5
// delete kth node of a circular linked list 

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

Node * delAtHead(Node * head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete head; 
        return NULL;
    }
    head->data = head->next->data ;
    Node * temp = head->next ;
    head->next = head->next->next ;
    delete temp;
    return head;
}

Node * delAtPos(Node * head , int pos){
    if(pos == 1)
        return delAtHead(head);
    Node * curr = head;
    for(int i = 1 ; i<pos-1 ;i++){
        curr=curr->next;
    }
    Node * temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;

    
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
    head = delAtPos(head,4);
    traverse(head);
    return 0 ;
}
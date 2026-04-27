// lecture 3
// insert at end of a Doubly linked list 

#include<bits/stdc++.h>
using namespace std ;

struct Node{
public:
    int data ;
    Node * next ;
    Node * prev ;
    Node (int val){
        data = val;
        next =  NULL ;
        prev = NULL ;
    }
};

void printList(Node * head){
    Node * curr = head ;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr-> next ;
    }
}

Node * insertEnd(Node * head , int data){
    
    Node * temp = new Node(data);
    Node * curr = head ;
    if(head == NULL)
        return temp; 
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp ;
    temp->prev = curr;
    return head;

}

int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1 ;
    head = insertEnd(head,50);
    printList(head);

    
    return 0 ;
}
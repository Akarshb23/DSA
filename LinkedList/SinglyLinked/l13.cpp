// lecture 1 2
// sorted insert in a singly  linked list 

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

Node * middle(Node * head){
    if(head==NULL) return NULL;
    Node * slow = head , * fast = head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next ;
    }
    return slow;
}

void printList(Node * head){
    Node * curr = head ;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next ;
    }
}

int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    // other method to add elements to a linked list
    temp2->next = new Node(40);
    temp2->next->next = new Node(50);
    Node * temp =  middle(head);
    cout << temp->data << " " ;
    printList(head);
    return 0 ;
}
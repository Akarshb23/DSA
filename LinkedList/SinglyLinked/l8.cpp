// lecture 8
// delete tail node of a linked list

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

void printList(Node * head){
    Node * curr = head ;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next ;
    }
}

Node * deleteTail(Node * head){
    if(head == NULL)
        return NULL ;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node * curr = head;
    while(curr->next->next != NULL){
        curr = curr -> next ;
    }
    delete curr->next;
    curr->next = NULL;
    return head; 
}




 
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    deleteTail( head );
    printList(head);
    
    return 0 ;
}
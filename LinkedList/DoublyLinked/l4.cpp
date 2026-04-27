// lecture 4
// reversing a Doubly linked list 

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

Node* reverse(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* curr = head;
    Node* newHead = NULL;

    while (curr != NULL) {
        Node* next = curr->next; 
        curr->next = curr->prev;
        curr->prev = next;
        if (next == NULL)
            newHead = curr;       
        curr = next;
    }

    return newHead;
}

int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1 ;
    head = reverse(head);
    printList(head);

    
    return 0 ;
}
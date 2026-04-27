// lecture 5
// insert at end of a linked list

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

// void insertAtEnd(Node* &head, int val){
//     Node* newNode = new Node(val);

//     // case 1: empty list
//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }
 

// instead of  giving reference we can return the node as well

Node *insertAtEnd(Node *head , int val){
    if(head == NULL)
        return new Node(val);
    Node * temp = head ;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head ;
}


 
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    insertAtEnd( head , 3);
    printList(head);
    
    return 0 ;
}
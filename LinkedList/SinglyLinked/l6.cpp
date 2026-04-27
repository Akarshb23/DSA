// lecture 6
// insert at given postion of a linked list

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


Node* insertAtPos(Node* head, int pos, int val){
    if(pos == 1){
        Node* temp = new Node(val);
        temp->next = head;
        return temp;
    }

    Node* temp = head;

    for(int i = 0; i < pos - 2 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        return head; 
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next; 
    temp->next = newNode;       

    return head;
}


 
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    insertAtPos( head , 2 , 4);
    printList(head);
    
    return 0 ;
}
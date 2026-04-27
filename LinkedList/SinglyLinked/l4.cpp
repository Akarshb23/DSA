// lecture 4
// insert at beginning of a linked list

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

void *insertAtBegin(Node * & head , int val){
    Node * temp = new Node(val);
    temp -> next = head;
    head = temp ;
}
 

// instead of  giving reference we can return the node as well

// Node *insertAtBegin(Node *  head , int val){
//     Node * temp = new Node(val);
//     temp -> next = head;
//     return temp ;
// }


 
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    insertAtBegin( head , 3);
    printList(head);
    
    return 0 ;
}
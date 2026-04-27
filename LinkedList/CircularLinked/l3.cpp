// lecture 3
// insertion at beginning of a circular linked list 

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
// to change this insertion into Big O(1) , we need to maintain tail pointer instead of head or insert after head and swap values
Node * insertAtBegin(Node * head , int x){
    Node * temp = new Node(x);
    if(head==NULL){
        temp->next =  temp;
    }
    else{
        Node * curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp ;
        temp->next = head;
    }
    return temp ;
}


// we insert after head and then swap the values of the two nodes
Node * insertAtBegin1(Node * head , int x){
    Node * temp = new Node(x);
    if(head==NULL){
        temp->next =  temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp ;
        int t = head->data;
        int g = temp->data;
        temp->data = t ;
        head->data = g;

    }
    return head ;
    
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
    head = insertAtBegin(head,60);
    traverse(head);
    cout << endl ;
    head = insertAtBegin1(head,70);
    traverse(head);
    return 0 ;
}
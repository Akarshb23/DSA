// lecture 1 
// introduction to a Doubly linked list 

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

int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1 ;

    
    return 0 ;
}
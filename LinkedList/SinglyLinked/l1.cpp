// lecture 1 
// introduction to a linked list 

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

int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    // other method to add elements to a linked list
    temp2->next = new Node(40);
    temp2->next->next = new Node(50);
    return 0 ;
}
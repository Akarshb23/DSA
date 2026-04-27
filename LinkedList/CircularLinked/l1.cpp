// lecture 1 
// introduction to a circular linked list 

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
    Node * temp3 = new Node(40);
    Node * temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3 ;
    temp3->next = temp4;
    temp4->next = head ;
    return 0 ;
}
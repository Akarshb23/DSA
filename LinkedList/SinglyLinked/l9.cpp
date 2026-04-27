// lecture 9
// searching in a linked list

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


int Search(Node * head , int val){
    Node * curr = head ;
    int count = 1 ;
    while(curr != NULL){
        if(curr->data == val){
            return count;
        }
        count++;
        curr = curr ->next;

    }
    return -1;
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
    temp3->next = temp4 ;
    cout << Search(head , 20);
    
    
    return 0 ;
}
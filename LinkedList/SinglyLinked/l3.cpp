// lecture 3
// recursive traversal of a linked list

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
    if (head == NULL)
        return ;
    cout << head->data << " " ;
    printList(head->next);

}


 
int main(){
    Node * head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = new Node(40);
    temp2->next->next = new Node(50);
    printList(head);
    return 0 ;
}
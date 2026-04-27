// lecture 2
// traversal of a circular linked list 

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

void traverse(Node * head){
    if(head==NULL)
        return ;
    cout << head->data << " ";
    for(Node * p = head->next ; p != head ; p = p->next){
        cout << p->data << " ";
    }
}

//another way to do traversal
// void traverse(Node * head){
//     if(head==NULL)
//         return ;
//     Node * p = head;
//     do{
//         cout << p->data << " ";
//         p = p->next ;
//     }
//     while(p!=head);
// }

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
    traverse(head);
    return 0 ;
}
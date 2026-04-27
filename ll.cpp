#include<bits/stdc++.h>
using namespace std;

// node declaration
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


// insert at head function ( new node , link new node to head , change head)
void insertatHead(Node*& head , int val){
    Node* newNode = new Node(val);  
    newNode->next = head;          
    head = newNode;                
}

// check conditions , link new node to curr next , then link curr next  to new node , return head

Node * insertatpos(Node *& Head , int pos , int val){
    if(pos < 1)
        return Head;
    if(pos ==1)
    {
        insertatHead(Head,val);
        return Head;
    }
    Node * curr = Head;
    for(int i = 1 ;i<pos-1 && curr != nullptr  ;i++){
        curr = curr -> next;
    }
    if(curr == nullptr)
        return Head;
    Node *  newNode = new Node(val);
    newNode -> next = curr -> next;
    curr -> next = newNode;
    return Head;
}

void insertattail(Node *& Head , int val){
    Node * newNode = new Node(val);
    if(Head == nullptr){
        Head = newNode ;
        return ;
    }
    Node * temp = Head;
    while(temp->next != nullptr){
        temp = temp-> next;
    }
    temp-> next = newNode ;
}

//
void deleteattail(Node *& Head){
    
    if (Head == nullptr)
        return;

    
    if (Head->next == nullptr) {
        delete Head;
        Head = nullptr;
        return;
    }

    Node * temp = Head;
    while(temp->next->next != nullptr){
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = nullptr;


}

// 
void deleteatHead(Node *& Head){
    if(Head == nullptr)
        return ;

    Node * temp = Head ;
    Head = Head -> next ;
    delete temp;

}

//
void deleteatpos(Node *& Head , int pos){
    if(pos < 1 )
        return ;
    if(pos==1){
        deleteatHead(Head);
        return;
    }
    Node * curr = Head ;
    for(int i = 1; i< pos -1 && curr != nullptr ; i++){
        curr = curr-> next;
    }
    if(curr == nullptr){
        return;
    }
    Node * temp = curr-> next;
    curr-> next = temp-> next;
    delete temp;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    insertatHead(head, 5);  
    insertatpos(head , 3 , 99);
    insertatpos(head , 4 , 299);
    insertatpos(head , 6 , 0);
    insertatpos(head , 2 , 58);
    insertatpos(head , 5 , 000);
    deleteatHead(head);
    deleteatpos(head,2);
    insertattail(head,4);
    deleteattail(head);

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
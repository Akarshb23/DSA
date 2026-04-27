// class code for linked list

#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
        int info ;
        node * link ;
    node(int value){
        info = value ;
        link = NULL ;
    }    
};


node * createNode(int value){
    node * ptr ;
    ptr = new node(value);
    return (ptr);
}


node * createSLL(){
    int value ;
    cin >> value  ;
    node * ptr , * nptr , * start ;
    ptr = createNode(value);
    start = ptr ;
    int ch ;
    cin >> ch ;
    while(ch == 1 ){
        cin >> value ;
        nptr = createNode(value);
        ptr->link = nptr ;
        ptr = nptr ;
        cin >> ch ;
    }
    return start ;
}


void traverse(node * temp){
    while(temp != NULL){
        cout << temp->info << " ";
        temp = temp->link ;
    }
    
}


int count(node * temp){
    int c = 0 ;
    while(temp != NULL){
        c++;
        temp = temp->link ;
    }
    return (c);
}


node * insertAtHead(node * & head , int value){
    node * temp = createNode(value);
    temp->link = head ;
    head = temp ;
    return head;

}


node * insertAtTail(node * & head , int value){
    node * temp = head;
    while(temp-> link != NULL){
        temp = temp->link ;
    }
    temp->link = createNode(value);
    return head ;

}


node * insertAtPos(node * & head , int pos ,int value){
    node * temp = head;
    node * curr = createNode(value);
    int k = 1;
    while(k != pos -1){
        k++;
        temp = temp->link ;
    }
    curr->link = temp->link;
    temp->link = curr;
    return head ;

}


node * reverse(node * &head ){
    node * prev = NULL ;
    node * curr = head  ;
    node * next = NULL;
    while(curr != NULL){
        next = curr->link ;
        curr->link = prev ;
        prev = curr ;
        curr = next ;

    }
    return prev;
}


node * delAtHead(node * &head){
    node * temp = head; 
    head=head->link ;
    delete temp ;
    return head ;
}

node * delAtTail(node * &head){
    node * temp = head; 
    if(head==NULL) return NULL;
    if(head->link = NULL){
        delAtHead(head);
    }
    while(temp->link->link != NULL){
        temp = temp->link;
    }
    delete temp->link;
    temp->link = NULL ;
}

node * delAtPos(node * & head , int pos){
    if(head==NULL) return NULL;
    if(pos==1){
        delAtHead(head);
    }
    int k = 1;
    node * curr = head;
    while(k!= pos -1){
        k++;
        curr=curr->link ;

    }
    node * temp = curr->link;
    curr->link = curr->link->link;
    delete temp;
    return head;

}




int main(){
    node * start ;
    start = createSLL();
    traverse(start);
    cout << endl ;
    cout << count(start) << " ";cout << endl ;
    // insertAtHead(start , 33);
    // insertAtTail(start,44);
    // insertAtPos(start , 3, 45);
    // insertAtPos(start , 4, 67);cout << endl ;
    // traverse(start);
    // start = reverse(start);
    // start = delAtHead(start);
    // delAtTail(start);
    start = delAtPos(start , 3);
    cout << endl ;

    traverse(start);

}
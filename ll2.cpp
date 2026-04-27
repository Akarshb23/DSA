#include<bits/stdc++.h>
using namespace std ;

class node{
    public :
        int coeff , expo ; 
        node * link ;
        node(int a , int b){
            coeff = a ;
            expo = b ;
            link = NULL ;
        }
};

node * createNode(int a , int b){
    node * ptr ;
    ptr = new node(a,b);
    return (ptr);
}

node * createPoly(){
    int c ,e  ;
    cin >> c >> e  ;
    node * ptr , * nptr , * start ;
    ptr = createNode(c,e);
    start = ptr ;
    int ch ;
    cin >> ch ;
    while(ch == 1 ){
        cin >> c >> e ;
        nptr = createNode(c,e);
        ptr->link = nptr ;
        ptr = nptr ;
        cin >> ch ;
    }
    return start ;
}


void traverse(node * start){
    node * temp = start ;
    while(temp->link != NULL){
        cout << temp->coeff << "X^" << temp->expo << "+";
        temp=temp->link;
    }
    cout << temp->coeff << "X^" << temp->expo ;
    
}
int main(){
    node * start ;
    start = createPoly();
    traverse(start);
}
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);

    head->next=a;
    a->next=b;
    b->next=c;
    /*
    //ei loop kaj korbe.  
    while(head != NULL){
        cout<<head->next<<endl;
        head = head->next;
    }
    */
    /* 
    this won't work. LL ekbar e print hobe. karon previous loop e amra head er address change kore shesh NULL kore disi. tai head er address kokhono change kora jabe na. 
    while(head != NULL){
        cout<<head->next<<endl;
        head = head->next;
    }
    */

    //eivabe LL print korbo:
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->next<<endl;
        temp = temp->next;
    }

    temp = head;
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->next<<endl;
        temp = temp->next;
    } // eibar print hobe.

    return 0;
}
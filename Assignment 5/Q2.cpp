#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//whn LL is sorted
node* removedulpicate(node* head){
    if(head == NULL){
        return NULL;
    }
    node*curr = head;
    while(curr != NULL){
        if(curr -> next != NULL && curr -> data == curr-> next -> data){
            node*next_next = curr -> next -> next;
            node* nodetodelete = curr ->NEXT;
            delete nodetodelete;
            curr -> next = next_next;
    }
    else{
        curr = curr ->next;
    }


//ehen LL is unsorted
node* removeFromUnsortes(node* head){
    if(head == NULL){
        return NULL;
    }
    node*curr = head;
    node*temp = NULL;
    while(curr != NULL){
        temp = temp -> next;
        while(temp != NULL){
            if(curr->data = temp->data){
                delete temp;
            }
        }
    }
}

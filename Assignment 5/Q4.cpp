#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

node* reverseLL(node* &head){
    if(head == NULL || head -> next ==NULL){
        return head;   
    }
    node*prev = NULL;
    node*curr = head;
    while(curr != NULL){
        node *forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
}

int main(){
    node*node1 = new node(11);
    node*head = node1;   
    reverseLL(head);

}

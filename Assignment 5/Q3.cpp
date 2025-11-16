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

int getlenght(node * head){
    int len = 0;

    while(head != NULL){
        len++;
        head = head ->next;
    }
    return len;
}

node* middle(node * &head){
    int len = getlenght(head);
    int mid = (len/2);
    return ans;

    node*temp = head;
    int cnt = 0;
    while(cnt<mid){
        temp = temp->next;
        cnt++;
    }
    return temp;


}

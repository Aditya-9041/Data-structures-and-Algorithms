#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

int getSize(Node* head){
    int len = 0;
    Node* temp  = head ;
    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }
    return len;
}

int main(){
  node*head = new node(10)
  getSize(head);
  return 0;
}

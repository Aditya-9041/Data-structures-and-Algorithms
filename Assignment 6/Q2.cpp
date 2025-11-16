#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};


void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL) {
        cout <<"List is Empty "<< endl;
        return ;
    }
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
  
    cout<<tail->data;
    cout << endl;
    
} 

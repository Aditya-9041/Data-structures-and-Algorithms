#include <iostream>
#include <queue>
using namespace std;

//part 1
class Stack{
    queue<int> q1, q2;
public:
    void push(int x){
        q2.push(x);
        while (!q1.empty()){
            q2.push(q1.front()); q1.pop();
        }
        swap(q1,q2);
    }
    void pop(){
        if (q1.empty()){ 
          cout<<"Stack Empty\n"; 
          return;
        }
        q1.pop();
    }
    int top(){
        if (q1.empty()){ 
          cout<< "Stack Empty\n";
          return -1;
        }
        return q1.front();
    }
    bool empty() { return q1.empty(); }
};

//Part 2
#include <iostream>
#include <queue>
using namespace std;
class StackOneQ {
    queue<int> q;
public:
    void push(int x){
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if (q.empty()){ 
          cout<<"Stack Empty\n";
          return;
        }
        q.pop();
    }
    int top(){
        if(q.empty()){
          cout << "Stack Empty\n";
          return -1; 
        }
        return q.front();
    }
    bool empty(){
      return q.empty();
    }
};


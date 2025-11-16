#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int precedence(char c) {
    if(c == '+' || c == '-'){ 
      return 1;
    }
    if(c == '*' || c == '/'){ 
      return 2;
    }
    if(c == '^'){ 
      return 3;
    }
    return 0;
}
string infixTopostfix(string infix){
    stack<char> st;
    string postfix = "";
    for(char ch : infix){
        if(isalnum(ch)) {
            postfix += ch;
        }
        else if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            st.pop(); 
        }

        else {
            while(!st.empty()&&precedence(st.top())>=precedence(ch)) {
                postfix+= st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()) {
        postfix+= st.top();
        st.pop();
    }
    return postfix;

int main() {
    string exp;
    cout<<"Enter Infix expression: ";
    cin>> exp;
    cout<<"Postfix Expression: "<<infixToPostfix(exp)<<endl;
    return 0;
}

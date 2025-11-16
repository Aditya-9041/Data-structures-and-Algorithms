#include <iostream>
#include <stack>
using namespace std;
int evaluatePostfix(string postfix) {
    stack<int> st;
    for(char ch : postfix){
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else {
            int b= st.pop();
            int a= st.pop();
            switch(ch){
                case '+': 
                  st.push(a + b);
                  break;
                case '-': 
                  st.push(a - b);
                  break;
                case '*': 
                  st.push(a * b);
                  break;
                case '/': 
                  st.push(a / b);
                  break;
                case '^': 
                  st.push(pow(a, b));
                  break;
            }
        }
    }
    return st.top();
}
int main() {
    string postfix;
    cout<<"Enter postfix expression: ";
    cin>> postfix;
    cout<<"Evaluation Result: "<<evaluatePostfix(postfix)<<endl;
    return 0;
}

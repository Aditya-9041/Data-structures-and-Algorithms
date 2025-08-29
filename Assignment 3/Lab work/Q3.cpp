#include <iostream>
#include <stack>
using namespace std;
bool balanced(string exp) {
    stack<char> st;
    for(char c : exp) {
        if(c=='(' || c=='{' || c=='[')
            st.push(c);
        else if(c==')' || c=='}' || c==']') {
            if(st.empty()) return false;
            char t = st.top(); 
            st.pop();
            if((c==')' && t!='(') || (c=='}' && t!='{') || (c==']' && t!='['))
                return false;
        }
    }
    return st.empty();
}
int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;
    if(balanced(exp))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}

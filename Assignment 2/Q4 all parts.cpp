#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s1="Hello", s2="World";
    cout<<s1+s2<<endl;
    string r="hello";
    reverse(r.begin(),r.end());
    cout<<r<<endl;
    string s="beautiful", noV="";
    for(char c:s) if(string("aeiouAEIOU").find(c)==string::npos) noV+=c;
    cout<<noV<<endl;
    string arr[]={"banana","apple","cherry"};
    sort(arr,arr+3);
    for(string x:arr) cout<<x<<" "; cout<<endl;
    string u="HELLO";
    for(char &c:u) c=tolower(c);
    cout<<u<<endl;
}

#include <iostream>
#include <set>
using namespace std;

int main(){
    int arr[]={1,2,2,3,4,4};
    set<int> s(arr,arr+6);
    cout<<"Distinct: "<<s.size();
}

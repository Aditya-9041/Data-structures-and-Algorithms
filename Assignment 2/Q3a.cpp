#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5};
    int n=5, sum=0;
    for(int i=0;i<n-1;i++) sum+=arr[i];
    int total=n*(n+1)/2;
    cout << total-sum;
}

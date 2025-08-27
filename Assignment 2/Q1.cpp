#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int low=0, high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main() {
    int arr[]={10,20,30,40,50};
    cout << binarySearch(arr,5,30);
}

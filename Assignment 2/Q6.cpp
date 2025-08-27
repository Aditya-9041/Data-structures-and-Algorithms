#include <iostream>
using namespace std;

int main(){
    int triplet[3][3]={{0,0,5},{0,2,8},{1,1,3}};
    for(int i=0;i<3;i++)
        cout<<triplet[i][1]<<" "<<triplet[i][0]<<" "<<triplet[i][2]<<endl;
}

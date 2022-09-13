#include <iostream>
using namespace std;
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

int main(){
    int n;cin>>n;
    int col=0;
    while(col<n){
        int row=0;
        while(row<=col){
            cout<<"*";
            row+=1;
        }
        cout<<endl;
        col+=1;
    }
    int col2=0;
    while(col2<n){
        int row=1;
        while(row<(n-col2)){
            cout<<"*";
            row+=1;
        
        }
        cout<<endl;
        col2+=1;

    }
    return 0;
}
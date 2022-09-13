#include <iostream>
using namespace std;
//  *********
//   *******
//    *****
//     ***
//      *


int main(){
    int n;cin>>n;
    int col=0;
    while(col<n){
       int space=0;
         while(space<=col){
            cout<<" ";
            space+=1;
         }
         int row=0;
         int cpy=n-col;
         while(row<cpy){
            cout<<"*";
            row+=1; 
         }
         int row1=0;
         int cpy1=n-(col+1);
         while(row1<cpy1){
            cout<<"*";
            row1+=1; 
         }
         
         cout<<endl;
         col+=1;
    }
    return 0;
}
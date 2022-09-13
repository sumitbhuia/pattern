#include <iostream>
using namespace std;

//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *

int main(){
    int n;cin>>n;
    int col=0;
    
    while(col<n){
     
     //trinagle no.1
     int space=col;
     while(space<n){
        cout<<" ";
        space+=1;
     }
     // trinagle no.2
        int row=n-col;
        while(row<=n){
           cout<<"*";
        row+=1;  
        }
      // triangle no. 3 
     int row1=0;
     while(row1<col){
        cout<<"*";
        row1+=1;
     } 
   
      cout<<endl;
     col+=1;
    }
    // completely different  all vatiables to make the lower triangle
    int col2=0;
    while(col2<n){
        // triangle no.4
        int row2=0;
     while(row2<=col2){
        cout<<" ";
        row2+=1;
     } 
     // triangle no.5
     int row3=col2;
     while(row3<n){
           cout<<"*";
        row3+=1;  
        }
    //trinagle no.6
    int row4=col2+1;
    while(row4<n){
        cout<<"*";
        row4+=1;
    }
     cout<<endl;
     col2+=1;
    }    

    return 0;
}
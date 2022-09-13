#include <iostream>
using namespace std;
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

int main(){
    int n;cin>>n;
    int col=0;
    while(col<=n){
        //triange no.1
       int row=1;
       while (row<=col)
       {
        cout<<row;
        row+=1;
       }
       //triangle no.2
       int row2=0;
       while(row2<2*(n-col)){
        cout<<" ";
        row2+=1;
       }
       // triangle no.3
       int row3=1;
       int cpy=col;
       while(row3<=col){
        cout<<cpy;
        row3+=1;
        cpy-=1;
       }
       cout<<endl;
       col+=1;
         
    }
    return 0;
}
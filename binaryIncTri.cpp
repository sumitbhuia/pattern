#include <iostream>
using namespace std;
// 1
// 01
// 101
// 0101
// 10101
int main(){
    int n;cin>>n;
    int col=0;
    int count=0;
    while(col<=n){
       int row=1;
      while(row<=col){
        //if sum of col and row is even print 1 otherwise print 0
      (col+row)%2==0?cout<<"1":cout<<"0";
       row+=1; 
      }
       cout<<endl;
       col+=1;
    }
      
    return 0;
}
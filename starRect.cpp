#include <iostream>
using namespace std;
// *****
// *   *
// *   *
// *   *
// *****
int main(){
    int n;cin>>n;
    int col=1;
    while(col<=n){
     int row=1;
     while(row<=n) {
        (row==1||row==n||col==1||col==n)?cout<<"*":cout<<" ";
        row+=1;
     }
     cout<<endl;
     col+=1;

    }
    return 0;
}
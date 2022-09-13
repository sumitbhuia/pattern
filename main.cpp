#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
             int s,x,y,z,left;
             cin>>s>>x>>y>>z;
             left=s-(x+y);
             if(left>=z)
             cout<<0<<endl;
             
             else if(left<z &&(z<=left+x)||(z<=left+y))
             cout<<1<<endl;
             
              else if(left<z && (z>left+x)||(z>left+y))
             cout<<2<<endl;
             
              
             
     }          
	return 0;
}

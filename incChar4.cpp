#include <iostream>
using namespace std;
// E
// DE
// CDE
// BCDE
// ABCDE
int main(){
    
	int n;cin>>n;
    int i=0;
    int cpy=n;
    while(i<n){
        char ch=64+n-i;
        int j=0;
        //increasing according to columns
        while(j<=i){
            cout<<ch;
            j+=1;
            ch+=1;
            
        }
        cout<<endl;
        i+=1;
    }
	return 0;
}
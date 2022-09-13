#include <iostream>
using namespace std;

// A
// BC
// CDE
// DEFG
// EFGHI
int main(){
    
	int n;cin>>n;
    int i=0;
    int cpy=1;
    while(i<n){
        char ch='A'+i;
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
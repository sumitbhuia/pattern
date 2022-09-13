#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *
int main(){
	int n;cin>>n;
    int cpy=n;
	int i=0;
    //i for columns
	while(i<n){
        //j for rows
		int j=0;
		while(j<cpy){
			cout<<"*";
			j+=1;    
		}
		cout<<endl;
		i+=1;
        cpy-=1;  
	}
	return 0;
}
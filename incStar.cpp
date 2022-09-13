#include <iostream>
using namespace std;

// *
// **
// ***
// ****


int main(){
	int n;cin>>n;
	int i=0;
	while(i<n){
		int j=0;
		while(j<=i){
			cout<<"*";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}



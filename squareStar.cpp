#include <iostream>
using namespace std;
// ***
// ***
// ***

int main(){
	int n;cin>>n;
    //i for columns
	int i=0;
	while(i<n){
        // j for rows
		int j=0;
		while(j<n){
			cout<<"*";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
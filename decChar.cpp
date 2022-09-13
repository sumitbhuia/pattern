#include <iostream>
using namespace std;
// ABCDE
// ABCD
// ABC
// AB
// A
int main(){
	int n;cin>>n;
    int cpy=n;
	int i=0;
    //i for columns
	while(i<n){
        //j for rows
		int j=1;
		while(j<=cpy){
            char ch=64+j;
			cout<<ch;
			j+=1;    
		}
		cout<<endl;
		i+=1;
        cpy-=1;  
	}
	return 0;
}
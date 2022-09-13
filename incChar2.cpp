#include <iostream>
using namespace std;
// A
// AB
// ABC
// ABCD
// ABCDE

int main(){
	int n;cin>>n;
	int i=0;
	while(i<=n){
		int j=1;
		while(j<=i){
            char ch=64+j;
			cout<<ch;
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
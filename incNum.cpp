#include <iostream>
using namespace std;

// 1
// 12
// 123
// 1234
// 12345

int main(){
	int n;cin>>n;
	int i=0;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<j;
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
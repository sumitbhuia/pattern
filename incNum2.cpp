#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555

int main(){
	int n;cin>>n;
	int i=0;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i;
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
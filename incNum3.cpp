#include <iostream>
using namespace std;

// 1
// 23
// 456
// 78910

int main(){
    int inc=1;
	int n;cin>>n;
	int i=0;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<inc;
			j+=1;
            inc+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
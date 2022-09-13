#include <iostream>
using namespace std;
// 12345
// 678910
// 1112131415
// 1617181920
// 2122232425


int main(){
	int inc=1;
	int n;cin>>n;
	int i=0;
	while(i<n){
		int j=1;
		while(j<=n){
			
			cout<<inc;
			j+=	1;
			inc+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
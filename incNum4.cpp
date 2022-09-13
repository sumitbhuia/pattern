#include <iostream>
using namespace std;

// 1
// 23
// 345
// 4567
// 56789

int main(){
	int n;cin>>n;
	int i=1;
   
	while(i<=n){
         int cpy=i;
		int j=1;
		while(j<=i){
			cout<<cpy;
			j+=1;
            cpy+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
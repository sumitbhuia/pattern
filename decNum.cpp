#include <iostream>
using namespace std;
// 12345
// 1234
// 123
// 12
// 1

int main(){
	int n;cin>>n;
    int cpy=n;
	int i=0;
    //i for columns
	while(i<n){
        //j for rows
		int j=1;
		while(j<=cpy){
			cout<<j;
			j+=1;    
		}
		cout<<endl;
		i+=1;
        cpy-=1;  
	}
	return 0;
}
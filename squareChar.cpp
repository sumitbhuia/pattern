#include <iostream>
using namespace std;
// AAAA
// BBBB
// CCCC
// DDDD

int main(){
	int n;cin>>n;
    //i for columns
	int i=0;
    //char cr='A'+i;
	while(i<n){
        // j for rows
		int j=0;
		while(j<n){
        char cr='A'+i;
			cout<<cr;
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
#include <iostream>
using namespace std;
// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI
int main(){
	int n;cin>>n;
    //i for columns
	int i=0;

    
	while(i<n){
        //prints characters in increasing order
        char cr='A'+i;
        // j for rows
		int j=0;
		while(j<n){
       
			cout<<cr;
			j+=1;
            cr+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
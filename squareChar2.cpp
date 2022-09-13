#include <iostream>
using namespace std;
// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
int main(){
	int n;cin>>n;
    //i for columns
	int i=0;
//prints characters in increasing order
    char cr='A';
	while(i<n){
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
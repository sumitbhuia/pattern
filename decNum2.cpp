 #include <iostream>
using namespace std;
// 1
// 21
// 321
// 4321
// 54321


int main(){
	int n;cin>>n;
	int i=1;
   
	while(i<=n){
         int cpy=i;
		int j=1;
		while(j<=i){
			cout<<cpy;
			j+=1;
            cpy-=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
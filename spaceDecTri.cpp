#include <iostream>
using namespace std;
// *****
//  ****
//   ***
//    **
//     *
int main()
{
    int n;
    cin >> n;
    int cpy=n;
    int i = 0;
    while (i < n)
    {
        int space = 0;
        int j = 0;
        while (space<i)
        {
            cout << " ";
            space += 1;   
        }
        
        while (j<cpy )
        {
            cout<<"*";
            j+=1;
             
        }
        
        cpy-=1;
        cout<<endl;
        i+=1;
    }

    return 0;
}
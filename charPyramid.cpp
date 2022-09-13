#include <iostream>
using namespace std;
     
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i <= n)
    {
        int space = n - i;
        int j = 1;
        char ch=65;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        while (j <= i)
        {
            cout<<ch;
            j+=1;
            ch+=1;
        }

        int row=1;
        int cpy=i;
        char cr=63+cpy;
        while (row<i)
        {
             
            cout<<cr;
            row+=1;
            cr-=1;;
        }
        
        
        cout<<endl;
        i+=1;
    }

    return 0;
}
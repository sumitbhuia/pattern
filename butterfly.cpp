#include <iostream>
using namespace std;
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main()
{
    int n;
    cin >> n;
    int col = 1;
    while (col < n)
    {
        // triangle no.1
        int row = 0;
        while (row < col)
        {
            cout << "*";
            row += 1;
        }
        // big triangle no.2
        int row2 = 0;
        while (row2 < 2 * (n - col))
        {
            cout << " ";
            row2 += 1;
        }
        // trinagle no.3
        int row3 = 0;
        while (row3 < col)
        {
            cout << "*";
            row3 += 1;
        }
        cout << endl;
        col += 1;
    }
    // new while loop with new variable
    int col2 = 0;
    while (col2 < n)
    {
       // triangle no.4
        int row4 = 0;
        while (row4 < (n - col2))
        {
            cout << "*";
            row4 += 1;
        }
       // big triangle no.5
       int row5=0;
        while (row5 < 2* col2)
        {
            cout << " ";
            row5 += 1;
        }
       // triangle no.6
       int row6 = 0;
        while (row6 < (n - col2))
        {
            cout << "*";
            row6 += 1;
        }

    cout << endl;
    col2 += 1;
    }
    return 0;
}
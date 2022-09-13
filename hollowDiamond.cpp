#include <iostream>
using namespace std;
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

int main()
{
    int n;
    cin >> n;
    int col = 0;
    while (col < n)
    {
        // triangle no.1
        int row = 0;
        while (row < (n - col))
        {
            cout << "*";
            row += 1;
        }
        // traingle no.2 and 3 together
        int row2 = 0;
        while (row2 <= col * 2)
        {
            cout << " ";
            row2 += 1;
        }
        // triangle no.4
        int row3 = 0;
        while (row3 < (n - col))
        {
            cout << "*";
            row3 += 1;
        }
        cout << endl;
        col += 1;
    }
    // new while loop for lower triangle
    int col2 = 0;
    while (col2 < n)
    { 
        // triangle no.5
        int row4 = 0;
        while (row4 <=col2)
        {
            cout << "*";
            row4 += 1;
        }
       
        // triangle no.6 and 7
        int row5=1;
        while(row5<2*(n-col2)){
             cout<<" ";
             row5+=1;
        }
        
        // triangle no.8
        int row6=0;
        while(row6<=col2){
            cout<<"*";
            row6+=1;
        }
        cout << endl;
        col2 += 1;
    }

    return 0;
}
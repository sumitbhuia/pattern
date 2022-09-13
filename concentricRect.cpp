#include <iostream>
using namespace std;
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 

// Function to print the pattern
void printPattern(int n)
{
    
    // n is the number of different layers(concentrations)
    // s in the required rows and columns for n layers
    int s = 2 * n - 1;
 //we have to print this concentric pattern in 2 parts upper and lower
    // Upper Half
    for (int row= 0; row < (s / 2) + 1; row++) {
        // m is the printable boundary number(needs to decrease)
        int m = n;
 
        // Decreasing part
        for (int col =0; col < row; col++) {
            cout << m << " ";
            m--;
        }
 
        // Constant Part
        // for (int k = 0; k < s - 2 * row; k++) {
        //     cout << n - row << " ";
        // }
 
    //     // Increasing part.
    //     m = n - row + 1;
    //     for (int l = 0; l < row; l++) {
    //         cout << m << " ";
    //         m++;
    //     }
 
        cout << endl;
    // }
 
    // // Lower Half
    // for (int row = s / 2 - 1; row >= 0; row--) {
 
    //     // Decreasing Part
    //     int m = n;
    //     for (int col = 0; col < row; col++) {
    //         cout << m << " ";
    //         m--;
    //     }
 
    //     // Constant Part.
    //     for (int k = 0; k < s - 2 * row; k++) {
    //         cout << n - row << " ";
    //     }
 
    //     // Decreasing Part
    //     m = n - row + 1;
    //     for (int l = 0; l < row; l++) {
    //         cout << m << " ";
    //         m++;
    //     }
    //     cout << endl;
   }
}
// Driven Program
int main()
{
    int n;cin>>n;
 
    printPattern(n);
    return 0;
}
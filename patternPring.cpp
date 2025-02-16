/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

     *
   * * *
 * * * * *
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

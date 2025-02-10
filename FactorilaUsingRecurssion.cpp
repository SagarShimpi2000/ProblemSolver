// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int factUsingReccursion(int n)
{
    if(n<1)
        return 1;
    return n*factUsingReccursion(n-1);
}
int main() {
    // Write C++ code here
    int n;
    cout << "Enter numer : ";
    cin>>n;
    cout<<factUsingReccursion(n);

    return 0;
}

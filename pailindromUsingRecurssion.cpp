/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int reverse(int num,int rev)
{
    if(num<=0)
        return rev;
    int newRev=(rev*10)+(num%10);
    num=num/10;
    return reverse(num,newRev);
}


int main()
{
    int n;
    cout<<"enter number to check palindrom: ";
    cin>>n;
    if(n==reverse(n,0))
    {
        cout<<"palindrom";
    }else{
        cout<<"not palindrom";
    }
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
[?2004l
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28 
29 30 31 32 33 34 35 36 

* 
* # 
* # * 
* # * # 
* # * # * 
* # * # * # 
* # * # * # * 
* # * # * # * # 
[?2004h

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n=8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
        cout<<"* ";       
        }
    cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        int k=1;
        for(int j=0;j<=i;j++)
        {
        cout<<k<<" ";
        k++;
        }
    cout<<endl;
    }
    cout<<endl;
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
        cout<<k<<" ";
        k++;
        }
    cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
       j%2==0?cout<<"* ":cout<<"# ";
        }
    cout<<endl;
    }
    
    
    return 0;
}

/** Mohammad Irtisum
    
**/

//Write a program to find the nth term F, of the Fibonacci sequence using recursive and non-recursive method.

#include <bits/stdc++.h>
using namespace std;

void non_recursive(int n)
{
    int s=0,t=1,k=0;
    if(n==1)
    {
         cout<<s<<endl;
         return;
    }
    else if(n==2)
    {
        cout<<t<<endl;
        return;
    } 

    for(int i=3;i<=n;i++)
    {
        k=s+t;
        s=t;
        t=k;
    }
    cout<<k<<endl;
}

int recursive(int n)
{  
    if(n<=1) return n;
    return recursive(n-1)+recursive(n-2);

}
int main() {
    int n ; cin>>n;
    non_recursive(n);
    cout<<recursive(n-1)<<endl;
}
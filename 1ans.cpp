/** Mohammad Irtisum
    
**/
//Write a program to calculate the Factorial of a number using recursive and non-recursive method

#include <bits/stdc++.h>
using namespace std;

void non_recursive(int n);
{
    int t=1;
    for(int i=1;i<=n;i++)
    {
        t*=i;
    }
    cout<<"non_recursive "<<t,,endl;
}
int s=1;
void recursive(int n)
{
    if(n==1)
    {
        cout<<"recursive "<<s<<endl;
        return;
    }
    s*=n;
    recursive(n-1);
}
int main() {
   int n;cin>>n;
   non_recursive(n);
   recursive(n);

}
/** Mohammad Irtisum
**/
//Write a program to sort n numbers using Insertion Sort algorithm.

#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n;cin>>n;
   int arr[n+3];
   for(int i=0;i<n;i++) cin>>arr[i];

   for(int i=0;i<n;i++)
   {
       for(int j=i;j>0;j--)
       {
          if(arr[j-1]>arr[j]) swap(arr[j],arr[j-1]);
       }
   }

   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
  
}
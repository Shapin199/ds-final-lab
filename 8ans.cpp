/** Mohammad Irtisum
**/
//Write a program to sort n numbers using Selection Sort algorithm.

#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;cin>>n;
   int arr[n+3];
   for(int i=0;i<n;i++) cin>>arr[i];
   
   int min,index=0;
   for(int i=0;i<n-1;i++)
   {
       min=arr[i];
       for(int j=i+1;j<n;j++)
       {
           if(min>=arr[i])
           {
               min=arr[j];
               index=j;
           }
       }
    
       if(arr[i]>=min)
       {
           int temp = arr[i];
           arr[i] = arr[index];
           arr[index]= temp;
       }
   }

   for(int i=0;i<n;i++) cout<<arr[i]<<' ';
}
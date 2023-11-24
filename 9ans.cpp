/** Mohammad Irtisum
**/
//Write a program to sort n numbers using Merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void mer(int arr[],int l,int mid,int h)
{
    vector<int>t;
    int i= l;
    int j = mid+1;

    while (i<=mid && j<= h)
    {
        if(arr[i] <= arr[j])
        {
            t.push_back(arr[i]);
            i++;
        }
        else
        {
            t.push_back(arr[j]);
            j++;
        }
        
    } 
        while(i<=mid)
        {
           t.push_back(arr[i]); 
           i++;
        }
        while(j<=h)
        {
           t.push_back(arr[j]); 
           j++;
        }
        for(int x=1;x<=h;x++) arr[x]=t[x-1];
    
}

void mer_sort(int arr[],int l,int h)
{
    if(l>=h) return;

    int mid = (l+h)/2;

    mer_sort(arr,l,mid);
    mer_sort(arr,mid+1,h);
    mer(arr,l,mid,h);

}

int main(){

   int n;cin>>n;
   int arr[n+3];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   mer_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
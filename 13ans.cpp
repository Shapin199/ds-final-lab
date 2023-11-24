/** Mohammad Irtisum
**/
//Write a program to create a Maxheap of n elements and then display the elements of the heap.

#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int p=(i-1)/2;

    if(arr[p]>0)
    {
        if(arr[i]>arr[p]) swap(arr[i],arr[p]);

        heapify(arr,n,p);
    }
}
void insertN(int arr[],int& n, int key)
{
    n=n+1;
    arr[n-1] ==key;

    heapify(arr,n,n-1);
}


int main() {
    int n;cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++) cin>>arr[i];

    int key =15;
    insertN(arr,n,key);

    for(int i=0;i<n;i++)
       cout<<arr[i]<<' ';

    
}
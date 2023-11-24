/** Mohammad Irtisum
**/
// Write a program to display the adjacency matrix of a graph.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int v,e;cin>>v>>e;
    int matrix[v+1][v+1]={};
    for(int i=1;i<=e;i++)
    {
        int v1,v2;cin>>v1>>v2;
        matrix[v1][v2]=1;
        matrix[v2][v1]=1;

    }

    for(int i=1;i<=v;i++)
    {
        for(int j=i;j<=v;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


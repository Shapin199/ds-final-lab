/** Mohammad Irtisum
**/
// Write a program to display the adjacency list of a graph.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int v,e;cin>>v>>e;
    vector<vector<int>>gh(v+1);
    for(int i=1;i<=e;i++)
    {
        int v1,v2;cin>>v1>>v2;
        gh[v1].push_back(v2);
        gh[v2].push_back(v1);
    }

    for (int i = 1; i <= v; i++) {
         cout << i << ": ";
        for (int j = 0; j < gh[i].size(); j++) {
            cout << gh[i][j] << " ";
        }
        cout << endl;
    }
     for(int i=0; i < gh[1].size() ; i++){
        printf("%d ",gh[1][i]);
    }

}
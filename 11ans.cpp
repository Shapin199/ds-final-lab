/** Mohammad Irtisum
**/

//Write a program to create a Binary Search Tree of n elements and then search an element from the tree.

#include <bits/stdc++.h>
using namespace std;

struct binary{
  int data;
  binary *right;
  binary *left;
};


binary *insert(binary *root,int data)
{
    if(root == NULL)
    {
        root = new binary();
        root->data = data;
        root->left= root->right = NULL;
    }
    else if(data<= root->data)
        root->left = insert(root->left,data);
    else if(data> root->data)
         root->right= insert(root->right,data);
    
    return root;
}

int search(binary *root,int data)
{
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data<=root->data) search(root->right,data);
    else if(data< root->data) search(root->left,data);
    return false;
}
int main() {
    binary *root= NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
       root= insert(root,m);
    }

    if(search(root,1)==17) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
}
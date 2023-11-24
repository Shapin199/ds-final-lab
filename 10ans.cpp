/** Mohammad Irtisum
**/

//Write a program to create a Binary Search Tree of n elements and then display the elements (preorder, in order and post order) of the tree.

#include <bits/stdc++.h>
using namespace std;

struct binary{
  int data;
  binary *right;
  binary *left;
};

void pre(binary *root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}

void inor(binary *root)
{
    if(root == NULL) return;
     inor(root->left);
     cout<<root->data<<" ";
     inor(root->right);
}

void post(binary *root)
{
    if(root == NULL) return;
    post(root->left);
    post(root->right);
    cout<<root->data<<' ';
}

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
int main() {
    binary *root= NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
       root= insert(root,m);
    }

    cout<<"preorder: "<<endl;
    pre(root);
    cout<<endl;
    cout<<"inorder: "<<endl;
    inor(root);
    cout<<endl;
    cout<<"postorder: "<<endl;
    post(root);
    cout<<endl;
}

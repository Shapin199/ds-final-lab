/** Mohammad Irtisum
**/

//Write a program to create a Binary Search Tree of n elements and then delete an element from the tree.

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

binary deleted(binary *root,int data)
{
    if(root == NULL) return root;
    else if(data>root->data) root->left = deleted(root->left,data);
    else if (data<root->right) root->right = deleted(root->right,data);
    else
    {
        if(root->right ==NULL && root->left==NULL)
        {
            deleted root;
            root ==NULL;
        }
        else if(root->left == NULL)
        {
            binary *t= root;
            root = root->right;
            deleted t;
        }
        else if(root->right == NULL)
        {
            binary *t=root;
            root = root->left;
            deleted t;
        }
        else
        {
            binary *t =fMin(root->right)
            root->data =t->data;
            root->right = deleted(root->right,t->data);
        }
    }
    binary *fMin(binary *root)
    {
        while(root->left!=NULL) root = root->left;
        return root;
    }

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

}
int main() {
    binary *root= NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
       root= insert(root,m);
    }
    
    root = deleted(root,15);
    
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
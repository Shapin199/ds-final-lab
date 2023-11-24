/** Mohammad Irtisum
    C223091
**/

//Write a program to create a Linked List of n elements and then insert an element to the list.

#include<bits/stdc++.h>
using namespace std;

struct LL{
  int data;
  LL*next;
};

LL *insert(LL *root,int data)
{
    if(root==NULL)
    {
        root = new LL();
        root->data = data;
        root->next = NULL;
    }
    else
    {
        LL *cp = root;
        while(cp->next != NULL)
        {
            cp = cp->next ;
        }

        LL *new_node = new LL();
        new_node->data = data;
        new_node->next = NULL;
        cp->next = new_node;
    }
    return root;
}

void display(LL *root)
{
    if(root == NULL) return;
    cout<<root->data<<endl;
    display(root->next);
}
int main()
{
    LL*root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
        root = insert(root,m);
    }
    display(root);
}
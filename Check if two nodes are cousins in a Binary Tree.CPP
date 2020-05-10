#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

node *newnode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    
    return temp;
}

int isNext(node *root, node *a, node *b)
{
    if(root == NULL)
    {
        return 0;
    }
    
    return ((root->left == a && root->right == b)||
            (root->left == b && root->right == a)||
            (isNext(root->left,a,b))||
            (isNext(root->right,a,b)));
}

int checkLevel(node *root, node *a, int lvl)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root == a)
    {
        return lvl;
    }
    
    int l = checkLevel(root->left,a,lvl+1);
    
    if(l!=0)
    {
        return l;
    }
    
    checkLevel(root->right,a,lvl+1);
}

bool isCousin(node *root,node *a,node *b)
{
    if(checkLevel(root,a,1) == checkLevel(root,b,1) && (!isNext(root,a,b)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right = newnode(3);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    
    node *node1,*node2;
    
    node1 = root->left->left;
    node2 = root->left->right;
    
    if(isCousin(root,node1,node2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

/* OUTPUT

NO 

*/

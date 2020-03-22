#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

node* newnode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int minDepth(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int ldepth = minDepth(root->left);
    int rdepth = minDepth(root->right);
    
    if(ldepth < rdepth)
    {
        return (ldepth + 1);
    }
    else
    {
        return (rdepth + 1);
    }
}

int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    
    cout<<"So the minimum depth of the given tree is "<<minDepth(root);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------
/* SO THE TREE LOOKS LIKE THIS ---->

   1
  / \
 2   3
/
4

OUTPUT :-
So the minimum depth of the given tree is 2  

*/

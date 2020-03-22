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

int ldepth_sum(node* root)
{
    int lsum = 0;
    while(root != NULL)
    {
        lsum = lsum + root->data;
        root = root->left;
    }
    return lsum;
}

int rdepth_sum(node* root)
{
    int rsum = 0;
    while(root != NULL)
    {
        rsum = rsum + root->data;
        root = root->right;
    }
    return rsum;
}

int maxDepth(node* root)
{
    int lsum,rsum;
    if(root == NULL)
    {
        return 0;
    }
    int ldepth = maxDepth(root->left);
    int rdepth = maxDepth(root->right);
    lsum = ldepth_sum(root);
    rsum = rdepth_sum(root);
    
    if(ldepth > rdepth)
    {
        cout<<"Sum of the nodes along the minimum depth (left) is "<<lsum<<endl;
        return (ldepth + 1);
    }
    else
    {
        cout<<"Sum of the nodes along the minimum depth (right) is "<<rsum<<endl;
        return (rdepth + 1);
    }
}

int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(5);
    root->left->left = newnode(7);
    
    cout<<"So the minimum depth of the given tree is "<<maxDepth(root);
    return 0;
}


/* OUTPUT

Sum of the nodes along the minimum depth (right) is 7                                                                                         
Sum of the nodes along the minimum depth (left) is 9                                                                                          
Sum of the nodes along the minimum depth (right) is 5                                                                                         
Sum of the nodes along the minimum depth (left) is 10                                                                                         
So the minimum depth of the given tree is 3 

*/

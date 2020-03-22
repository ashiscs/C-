#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

node* newnode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

bool areIdentical(node *a, node *b)
{
    if(a == NULL && b == NULL)
    {
        return true;
    }
    if(a == NULL || b == NULL)
    {
        return false;
    }
    return (a->data == b->data && areIdentical(a->left,b->left) && areIdentical(a->right,b->right));
}

bool isSubtree(node *a, node *b)
{
    if(b == NULL)
    {
        return true;
    }
    if(a == NULL)
    {
        return false;
    }
    if(areIdentical(a,b))
    {
        return true;
    }
    return isSubtree(a->left,b) || isSubtree(a->right,b);
}

int main()
{
    node *a = newnode(26);
    a->right = newnode(3);
    a->right->right = newnode(3);
    a->left = newnode(10);
    a->left->left = newnode(4);
    a->left->left->right = newnode(30);
    a->left->right = newnode(6);

    node *b = newnode(10);
    b->right = newnode(6);
    b->left = newnode(4);
    b->left->right = newnode(30);

    if(isSubtree(a,b))
    {
        cout<<"b is a SUBTREE of a\n";
    }
    else
    {
        cout<<"b is NOT A SUBTREE of a\n";
    }
    return 0;
}

/* OUTPUT
b is a SUBTREE of a 
*/

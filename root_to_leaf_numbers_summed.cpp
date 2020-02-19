#include<iostream>
using namespace std;
/*class node
{
    public:
    int data;
    node *right, *left;
};*/
struct node
{
    int data;
    node *right, *left;
};
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return Node;
}
int rtlsum(node *root,int val)
{
    if(root == NULL)
        return 0;
    val = val*10 + root->data;
    if(root->left == NULL && root->right == NULL)
        return val;
    return rtlsum(root->left,val)+rtlsum(root->right,val);
}
int main()
{

    node *root = newNode(6);
    root->left = newNode(3);
    root->right = newNode(5);
    root->left->left = newNode(2);
    root->left->right = newNode(5);
    root->right->right = newNode(4);
    root->left->right->left = newNode(7);
    root->left->right->right = newNode(4);
    cout<<"Sum of all nodes "<<rtlsum(root,0);
    return 0;
}

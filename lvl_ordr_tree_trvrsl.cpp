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

int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int lheight = height(root->left);
        int rheight = height(root->right);
        
        if(lheight > rheight)
        {
            return (lheight+1);
        }
        else
        {
            return (rheight+1);
        }
    }
}

void printGivenLevel(node* root,int lvl)
{
    if(root == NULL)
    {
        return;
    }
    if(lvl == 1)
    {
        cout<<root->data<<" ";
    }
    else
    {
        printGivenLevel(root->left, lvl-1);
        printGivenLevel(root->right, lvl-1);
    }
}

void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for(i=1;i<=h;i++)
    {
        printGivenLevel(root,i);
    }
}

void printIt(node* root)
{
    cout<<"So, the elements of the tree look like\n";
    while(root != NULL)
    {
        cout<<root->data<<" ";
        printIt(root->left);
        printIt(root->right);
    }
    cout<<endl;
}

int main()
{
    node* root = newnode(1);
    root->left = newnode(3);
    root->right = newnode(5);
    root->left->left = newnode(4);
    root->left->right = newnode(2);
    
    //printIt(root);
    
    cout<<"Level order traversal of binary tree is\n";
    printLevelOrder(root);
}



/*
TREE LOOKS LIKE :-

              1
             /  \
            3    5
           /  \
          4    2

OUTPUT :-
Level order traversal of binary tree is                              
1 3 5 4 2  

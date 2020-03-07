#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode(int item)
{
    struct node *temp = new node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void preorder(struct node *root)
{
    if(root != NULL)
    {
        cout<< root->data <<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
vector<struct node *> constructTrees(int start, int end) 
{ 
	vector<struct node *> list; 

	
	if (start > end) 
	{ 
		list.push_back(NULL); 
		return list; 
	} 


	for (int i = start; i <= end; i++) 
	{ 
		
		vector<struct node *> leftSubtree = constructTrees(start, i - 1); 

		
		vector<struct node *> rightSubtree = constructTrees(i + 1, end); 

		
		for (int j = 0; j < leftSubtree.size(); j++) 
		{ 
			struct node* left = leftSubtree[j]; 
			for (int k = 0; k < rightSubtree.size(); k++) 
			{ 
				struct node * right = rightSubtree[k]; 
				struct node * node = newnode(i);
				node->left = left;			  
				node->right = right;		 
				list.push_back(node);		
			} 
		} 
	} 
	return list; 
} 
int main()
{
    vector<struct node *> totalTrees = constructTrees(1,3);
    
    cout<<"Preorder traversal of possible bsts are \n";
    for(int i = 0; i < totalTrees.size(); i++)
    {
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(node **head, int data)
{
    node *temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void printIt(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void swapNodes(node **head, int x, int y)
{
    if(x == y)
    {
        return;
    }
    node *prevX=NULL;
    node *currX=*head;
    while(currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }
    
    node *prevY=NULL;
    node *currY=*head;
    while(currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }
    
    if(currX == NULL || currY == NULL)
    {
        return;
    }
    
    if(prevX != NULL)
    {
        prevX->next = currY;
    }
    else
    {
        *head = currY;
    }
    
    if(prevY != NULL)
    {
        prevY->next = currX;
    }
    else
    {
        *head = currX;
    }
    
    node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}

int main()
{
    node *head = NULL;
    
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    
    cout<<"Linked list before swapping is\n";
    printIt(head);
    
    swapNodes(&head,1,6);
    
    cout<<"Linked list after swapping is\n";
    printIt(head);
    
    return 0;
}

/* OUTPUT
Linked list before swapping is                                         
1 2 3 4 5 6 7                                                          
Linked list after swapping is                                          
6 2 3 4 5 1 7 
*/

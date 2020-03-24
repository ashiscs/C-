#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(node **head,int data)
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

void reverse(node **head)
{
    node *prev = NULL;
    node *curr = *head;
    node *next = NULL;
    
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next;
    }
    *head = prev;
}

int main()
{
    node *head = NULL;
    
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,85);
    
    cout<<"Original Linked List is\n";
    printIt(head);
    
    reverse(&head);
    
    cout<<"Reversed Linked List is\n";
    printIt(head);
    
    return 0;
}
-----------------------------------------------------------------------------------------------------

/* OUTPUT

Original Linked List is                                              
85 15 4 20                                                           
Reversed Linked List is                                              
20 4 15 85  

*/

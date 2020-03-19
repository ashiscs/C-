#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void push(node** head, int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void printNthFromLast(node* head, int data)
{
    int len = 0,i;
    node* temp = head;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    if(data > len)
        return;
    temp = head;
    for(i=1; i<len-data+1 ;i++)
    {
        temp = temp->next;
    }
    cout<<"So the nth element from the last is\n";
    cout<<temp->data;
}

void printLL(node* head)
{
    cout<<"So the Linked List looks like\n";
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,35);
    
    printLL(head);
    printNthFromLast(head,2);
    return 0;
}

/* OUTPUT

So the Linked List looks like                                                        
35 15 4 20                                                                           
So the nth element from the last is                                                  
4  

*/

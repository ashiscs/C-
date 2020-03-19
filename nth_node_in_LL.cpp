#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void push(node** head,int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

int getNth(node* head, int index)
{
    node* current = head;
    int count = 0;
    
    while(current != NULL)
    {
        if(count == index)
        {
            return (current->data);
        }
        count++;
        current = current->next;
    }
}

void printLL(node* head)
{
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
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    
    printLL(head);
    cout<<"So, the nth element is "<<getNth(head,3);
    return 0;
}

/* OUTPUT

1 12 1 4 1                                                           
So, the nth element is 4

*/

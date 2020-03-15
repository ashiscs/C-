#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(struct node** head, int data)
{
    struct node* temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

bool detectLoop(struct node* head)
{
    struct node* slow = head;
    struct node* fast = head;
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    struct node* head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    
    head->next->next->next->next = head;
    
    if(detectLoop(head))
    {
        cout<<"LOOP FOUND";
    }
    else
    {
        cout<<"NOT LOOP FOUND";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};

void push(struct node** head,int data)
{
    struct node* temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

bool detectTheLoop(struct node* head)
{
    unordered_set<node*> s;
    while(head != NULL)
    {
        if(s.find(head) != s.end())
        {
            return true;
        }
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main()
{
    struct node* head = NULL;
    
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,10);
    
    head->next->next->next->next = head;
    
    if(detectTheLoop(head))
    {
        cout<<"LOOP FOUND";
    }
    else
    {
        cout<<"LOOP NOT FOUND";
    }
    return 0;
}

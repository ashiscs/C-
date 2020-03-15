#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

node* newnode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

bool detectLoop(node* head)
{
    node* temp = new node;
    while(head != NULL)
    {
        if(head->next == NULL)
        {
            return false;
        }
        if(head->next == temp)
        {
            return true;
        }
        node* nex = head->next;
        head->next = temp;
        head = nex;
    }
    return false;
}

int main()
{
    struct node* head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = newnode(4);
    head->next->next->next->next = newnode(5);
    
    head->next->next->next->next->next = head;
    
    if(detectLoop(head))
    {
        cout<<"LOOP FOUND";
    }
    else
    {
        cout<<"LOOP NOT FOUND";
    }
    return 0;
}

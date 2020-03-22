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

void rotateIt(node** head, int k)
{
    if(k == 0)
    {
        return;
    }
    node* current = *head;
    int count = 1;
    while(count<k && current!= NULL)
    {
        current = current->next;
        count++;
    }
    if(current == NULL)
    {
        return;
    }
    
    node* kthnode = current;
    
    while(current->next != NULL)
    {
        current = current->next;
    }
    
    current->next = *head;
    
    *head = kthnode->next;
    
    kthnode->next = NULL;
}

void printIt(node* head)
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
    for(int i =60; i>0; i-=10)
    {
        push(&head, i);
    }
    
    cout<<"So the given linked list is\n";
    printIt(head);
    
    rotateIt(&head,2);
    
    cout<<"\nSo the rotated linked list is\n";
    printIt(head);
}

/* OUTPUT

So the given linked list is                                          
10 20 30 40 50 60                                                    
                                                                     
So the rotated linked list is                                        
30 40 50 60 10 20  

*/

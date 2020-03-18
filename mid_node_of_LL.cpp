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

void printMid(node* head)
{
    node* slow = head;
    node* fast = head;
    
    if(head != NULL)
    {
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"Middle Element is\n"<<slow->data;
        cout<<endl;
    }
}

void printList(node* head)
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
    int i;
    for(i=8;i>0;i--)
    {
        push(&head,i);
        //printList(head);
        //printMid(head);
    }
    printList(head);
    printMid(head);
    return 0;
}


/* OUTPUT

1 2 3 4 5 6 7 8                                                      
Middle Element is                                                    
5   

*/

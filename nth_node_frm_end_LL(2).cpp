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
    node* main = head;
    node* ref = head;
    int count = 0;
    
    //if(head != NULL)
    //{
        while(count < data)
        {
            if(ref == NULL)
            {
                return;
            }
            count++;
            ref = ref->next;
        }
    //}
    
    while(ref != NULL)
    {
        ref = ref->next;
        main = main->next;
    }
    cout<<"So the nth element from last is\n";
    cout<<main->data;
    
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
    printNthFromLast(head,3);
    return 0;
}

/* OUTPUT

So the Linked List looks like                                                        
35 15 4 20                                                                           
So the nth element from last is                                                      
15  

*/

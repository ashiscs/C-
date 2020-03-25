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

void moveNode(node **dest, node **src)
{
    node *temp = *src;
    *src = temp->next;
    temp->next = *dest;
    *dest = temp;
}

node *sortedMerge(node *a, node *b)
{
    node dummy;
    node *tail = &dummy;
    
    dummy.next = NULL;
    
    while(1)
    {
        if(a == NULL)
        {
            tail->next = b;
            break;
        }
        else if(b == NULL)
        {
            tail->next = a;
            break;
        }
        else if(a->data <= b->data)
        {
            moveNode(&(tail->next), &a);
        }
        else
        {
            moveNode(&(tail->next), &b);
        }
        tail = tail->next;
    }
    return (dummy.next);
}

int main()
{
    node *res = NULL;
    node *a = NULL;
    node *b = NULL;
    
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    
    cout<<"Linked list A looks like\n";
    printIt(a);
    
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);
    
    cout<<"Linked list B looks like\n";
    printIt(b);
    
    res = sortedMerge(a,b);
    cout<<"Merged Sorted Linked Lists looks like\n";
    printIt(res);
    
    return 0;
    
}

/* OUTPUT

Linked list A looks like                                             
5 10 15                                                              
Linked list B looks like                                             
2 3 20                                                               
Merged Sorted Linked Lists looks like                                
2 3 5 10 15 20

*/

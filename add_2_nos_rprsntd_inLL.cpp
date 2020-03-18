#include<iostream>
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

void push(node** head, int data)
{
    node* temp = newnode(data);
    temp->next = *head;
    *head = temp;
}

node* addLists(node* first, node* second)
{
    node* res = NULL;
    int cry = 0,s;
    node *temp,*prev = NULL;
    while(first != NULL || second != NULL)
    {
        s = cry + (first ? first->data : 0) + (second ? second->data : 0);
        cry = (s>=10) ? 1 : 0;
        s = s % 10;
        temp = newnode(s);
        
        if(res == NULL)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }
        
        prev = temp;
        
        if(first)
        {
            first = first->next;
        }
        if(second)
        {
            second = second->next;
        }
        
        if(cry > 0)
        {
            temp->next = newnode(cry);
        }
        
    }
    return res;
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
    node* res = NULL;
    node* first = NULL;
    node* second = NULL;
    
    push(&first,6);
    push(&first,4);
    push(&first,9);
    push(&first,5);
    push(&first,7);
    
    cout<<"So the first list is\n";
    printList(first);
    
    push(&second,4);
    push(&second,8);
    push(&second,5);
    push(&second,6);
    
    cout<<"So the second list is\n";
    printList(second);
    
    res = addLists(first,second);
    cout<<"Resultant list is\n";
    printList(res);
    
    return 0;
}


/*  OUTPUT
So the first list is                                            
7 5 9 4 6                                                       
So the second list is                                           
6 5 8 4                                                         
Resultant list is                                               
3 1 8 9 6
*/

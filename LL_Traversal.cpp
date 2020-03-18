#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void printIt(node* head)
{
    while(head != NULL)
    {
        if(head->next != NULL){
            cout<<head->data<<" -> ";
        }
        else
        {
            cout<<head->data;
        }
        head = head->next;
    }
}

int main()
{
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    
    head = new node;
    second = new node;
    third = new node;
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    cout<<"So the linked list looks like\n";
    printIt(head);
    return 0;
}



/* OUTPUT
10 -> 20 -> 30
*/

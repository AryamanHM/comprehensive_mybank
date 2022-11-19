#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *next;
};
void segregateEvenOdd(struct Node **head_ref)
{
    struct Node *end=*head_ref;
    struct Node *prev=NULL;
    struct Node *curr=*head_ref;
    while(end->next!=NULL)
    end=end->next;
    struct Node *new_end=end;
    while(curr->data%2!=0 && curr!=end)
    {
        new_end->next=curr;
        curr=curr->next;
        
        new_end=new_end->next;
    }
    if(curr->data%2==0)
    {
        *head_ref=curr;
        while(curr!=end)
        {
            if((curr->data)%2==0)
            {
                prev=curr;
                curr=curr->next;
            }
            else
            {
                prev->next=curr->next;
                curr->next=NULL;
                new_end->next=curr;
                new_end=curr;
                curr=prev->next;
            }
        }
    }
    else
    prev=curr;
    if(new_end!=end && (end->data)%2!=0)  
    {
        prev->next=end->next;
        end->next=NULL;
        new_end->next=end;
    }
    return;
}
void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printList(struct Node *node)
{
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node=node->next;
    }
}

int main()
{
    struct Node* head=NULL;
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=n-1;i>=0;i--)
    {
        scanf("%d",&x);
        a[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        x=a[i];
        push(&head,x);
    }
    segregateEvenOdd(&head);
    printList(head);
    return 0;
}

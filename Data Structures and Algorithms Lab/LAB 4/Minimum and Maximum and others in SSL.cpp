#include <cstdlib>
#include <stdio.h>  
struct Node { 
    int data; 
    struct Node* next; 
}; 
int count=0;
int largestElement(struct Node* head) 
{  
    int max = INT_MIN; 
    while (head != NULL) { 
        if (max < head->data) 
            max = head->data; 
        head = head->next; 
    } 
    return max; 
} 
int smallestElement(struct Node* head) 
{ 
    int min = INT_MAX; 
    while (head != NULL) {  
        if (min > head->data) 
            min = head->data; 
  
        head = head->next; 
    } 
    return min; 
}  
void push(struct Node** head, int data) 
{ 
    struct Node* newNode =  
         (struct Node*)malloc(sizeof(struct Node));  
    newNode->data = data; 
    newNode->next = (*head); 
    (*head) = newNode; 
    count++;
} 
void printList(struct Node* head) 
{ 
    while (head != NULL)
	 { 
        printf("%d -> ", head->data); 
        head = head->next; 
    } 
    printf("NULL\n" );
} 
/* Given a reference (pointer to pointer) to the head of a list 
   and a position, deletes the node at the given position */
void deleteNode(struct Node **head_ref, int position) 
{ 
   // If linked list is empty 
   if (*head_ref == NULL) 
      return; 
  
   // Store head node 
   struct Node* temp = *head_ref; 
  
    // If head needs to be removed 
    if (position == 0) 
    { 
        *head_ref = temp->next;   // Change head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Find previous node of the node to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of nodes 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    struct Node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
    count--;
} 
int main()
{
	struct Node* head = NULL; 
	int choice=1,n,ch;
	while(choice==1)
	{
		printf("\nStack Menu");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Print maximum element.\n5.Print minimum element.\n6.Print Number of Nodes.\n7.Exit Program.");
		printf("\n\nEnter your choice(1-5):");
		scanf("%d",&ch);
			switch(ch)
		{
			case 1: printf("Enter an element in stack.\n");
			        scanf("%d",&n);
			        push(&head,n);
					break;
			case 2: printf("Enter position at which element has to be deleted.\n");
			        scanf("%d",&n);
			        deleteNode(&head,n);
			        break;
			case 3: printList(head);
					break;
			case 4:	printf("Maximum element in linked list:\n");
			        printf("%d\n",largestElement(head)); 
			        break;
			case 5: printf("Minimum element in linked list:\n");
			        printf("%d\n",smallestElement(head));
			        break;
			case 6: printf("Number of nodes:\n");
                    printf("%d",count);   
					break;   
			case 7: exit(1);        
			default: printf("\nWrong Choice!!");
}
}
}


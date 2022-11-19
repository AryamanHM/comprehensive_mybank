#include<stdio.h>

// structure of node of doubly linked list 
struct Node { 
	int data; 
	struct Node* next, *prev; 
}; 

// function to count triplets in a sorted doubly linked list 
// whose sum is equal to a given value 'x' 
int countTriplets(struct Node* head, int x) 
{ 
	struct Node* ptr1, *ptr2, *ptr3; 
	int count = 0; 

	
	for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next) 
		for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next) 
			for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next) 

				if ((ptr1->data * ptr2->data * ptr3->data) == x) 

					
					count++; 

	return count; 
} 
 
void insert(struct Node** head, int data) 
{ 
	// allocate node 
	struct Node* temp = new Node(); 

	// put in the data 
	temp->data = data; 
	temp->next = temp->prev = NULL; 

	if ((*head) == NULL) 
		(*head) = temp; 
	else { 
		temp->next = *head; 
		(*head)->prev = temp; 
		(*head) = temp; 
	} 
} 

int main() 
{ 
	// start with an empty doubly linked list 
	struct Node* head = NULL; 
int i,n,a;
printf("Enter number of elements\n");
scanf("%d",&n);
	printf("Insert values in sorted order\n"); 
for(i=0;i<n;i++)
{
	scanf("%d",&a);
	insert(&head,a);
}
	printf("Enter value of x\n");
	int x;
	scanf("%d",&x);

	printf("Count=%d\n",countTriplets(head, x)); 
	return 0; 
} 


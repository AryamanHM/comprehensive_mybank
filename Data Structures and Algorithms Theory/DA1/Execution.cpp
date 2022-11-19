
#include<stdio.h>
#include <cstdlib>
/* structure for a node in circular 
linked list */
struct Node 
{ 
	int data; 
	struct Node *next; 
}; 

// To create a new node of circular 
// linked list 
Node *newNode(int data) 
{ 
Node *temp = new Node; 
temp->next = temp; 
temp->data = data; 
} 

/* Function to find the only person left 
after one in every k-th node is killed 
in a circle of n nodes */
void getJosephusPosition(int k, int n) 
{ 
	// Create a circular linked list of 
	// size N. 
	Node *head = newNode(1); 
	Node *prev = head; 
	for (int i = 2; i <= n; i++) 
	{ 
		prev->next = newNode(i); 
		prev = prev->next; 
	} 
	prev->next = head; // Connect last 
					// node to first 

	/* while only one node is left in the 
	linked list*/
	Node *ptr1 = head, *ptr2 = head; 
	while (ptr1->next != ptr1) 
	{ 
		// Find m-th node 
		int count = 1; 
		while (count != k) 
		{ 
			ptr2 = ptr1; 
			ptr1 = ptr1->next; 
			count++; 
		} 

		/* Remove the m-th node */
		ptr2->next = ptr1->next; 
		free(ptr1); 
		ptr1 = ptr2->next; 
	} 

	printf ("Last person left standing  is %d\n ", ptr1->data); 
} 

int main() 
{ 
	int n,k; 
	printf("Input the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle.\n");
	scanf("%d%d",&n,&k);
	getJosephusPosition(k, n); 
	return 0; 
} 


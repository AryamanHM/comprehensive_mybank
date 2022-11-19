#include<stdio.h> 
#include<cstdlib>
struct Node { 
	int data; 
	struct Node* link; 
}; 
struct Node* top; 
void push(int data) 
{ 
	struct Node* temp; 
	temp = new Node();  
	if (!temp) { 
		printf("\nHeap Overflow"); 
		exit(1); 
	} 
	temp->data = data; 
	temp->link = top;  
	top = temp; 
} 
int isEmpty() 
{ 
	return top == NULL; 
} 
int peek() 
{ 
	if (!isEmpty()) 
		return top->data; 
	else
		exit(1); 
} 
void pop() 
{ 
	struct Node* temp; 
	if (top == NULL) 
	{ 
		printf("\nStack Underflow"); 
		exit(1); 
	} 
	else 
	{ 
		temp = top; 
		top = top->link; 
		temp->link = NULL; 
		free(temp); 
	} 
} 
void display() 
{ 
	struct Node* temp; 
	if (top == NULL) { 
		printf("\nStack Underflow"); 
		exit(1); 
	} 
	else { 
		temp = top; 
		while (temp != NULL) 
		{  
			printf("\n%d",temp->data);; 
			temp = temp->link; 
		} 
	} 
} 

int main()
{
	int choice=1,n,ch;
	while(choice==1)
	{
		printf("\nStack Menu");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.View Top Element\n5.Exit.");
		printf("\n\nEnter your choice(1-5):");
		scanf("%d",&ch);
			switch(ch)
		{
			case 1: printf("Enter an element in stack.\n");
			        scanf("%d",&n);
			        push(n);
					break;
			case 2: pop();
			        break;
			case 3: display();
					break;
			case 4:	printf("\nTop element is %d\n",peek());	
			break;
			case 5:exit(1);
			default: printf("\nWrong Choice!!");
}
}
}


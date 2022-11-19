#include <stdio.h>
#include <stdlib.h>
void push(char element, char stack[], int *top, int StackSize){
 if(*top == -1)
 {
 	
  stack[StackSize - 1] = element;
  *top = StackSize - 1;
 }
 else if(*top == 0)
 {
  printf("The stack is already full. \n");
 }
 else
 {
  stack[(*top) - 1] = element;
  (*top)--;
 }
}
void pop(char stack[], int *top, int StackSize)
{
 if(*top == -1)
 {
   printf("The stack is empty. \n");
 }
 else
 {
  printf("Element popped: %c \n", stack[(*top)]);
  if((*top) == StackSize - 1)
  {
    (*top) = -1;
  }
  else{
    (*top)++;
  }
 }
}
void display(char stack[], int *top, int StackSize)
{
	int i;
		printf("\nStack is...\n");
		for(i=10;i>=0;--i)
			printf("%c\n",stack[i]);
	
}
int main()
{
	int StackSize=10;
	char Stack[StackSize];
    int count=0,top=-1,choice=1;
	char ch;
	while(choice==1)
	{
		printf("\nStack Menu");
		printf("\n\n1.Push\n2.Pop\n3.Display");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		if(ch==1)
		count++;
		if(count==4)
{
	printf("Level 4 reached.Reorder Rice Stack.");
	exit(0);
}
		switch(ch)
		{
			case 1: push('R',Stack,&top,StackSize);
					break;
			case 2: pop(Stack,&top,StackSize);
					break;
			case 3: display(Stack,&top,StackSize);
					break;
			default: printf("\nWrong Choice!!");
}
printf("Enter 1 to Put or remove Rice Stack or 0 to End\n");
scanf("%d",&choice);
}

}

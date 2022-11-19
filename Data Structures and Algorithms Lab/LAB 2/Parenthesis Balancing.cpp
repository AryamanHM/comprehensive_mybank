#include <stdio.h>
void push(char element, char stack[], int *top, int stackSize){
 if(*top == -1)
 {
 	
  stack[stackSize - 1] = element;
  *top = stackSize - 1;
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
void pop(char stack[], int *top, int stackSize)
{
 if(*top == -1)
 {
   printf("The stack is empty. \n");
 }
 else
 {
  printf("Element popped: %c \n", stack[(*top)]);
  if((*top) == stackSize - 1)
  {
    (*top) = -1;
  }
  else{
    (*top)++;
  }
 }
}
int main()
{
  int n;	
  char stack[20];
  int top = -1;
  printf("Enter expression\n");
  char str[20],x; 
   gets(str); 
   for (int i = 0; i < sizeof(str); i++)
   {
   	x=str[i];
   	if(x=='(')
   	{
      push(x, stack, &top, 20);
  }
  else
  {
  	if(x==')')
  	{
  		pop(stack, &top, 20);
	  }
  }
  
  	if(x=='$')
  	{
  		if(top==-1)
  		{
  			printf("Balanced");
		  }
		  else
		  {
		  	printf("Unbalanced");
		  }
	  }
  }
 
  return 0;
}


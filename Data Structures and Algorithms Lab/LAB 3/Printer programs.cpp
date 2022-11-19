#include <stdio.h>
#include<stdlib.h>
#define MAX 10
char queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert()
{
	char program;
    if(rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
    	if(front== - 1)
        front = 0;
        printf("Inset the program in queue : ");
        scanf(" %c", &program);
        rear = rear + 1;
        queue_array[rear] = program;
}
}
void dequeue()
{
    if(front == - 1 || front > rear)
       {
             printf("Queue Underflow \n");
          return;
      }
       else
      {
           printf("Element deleted from queue is : %c \n", queue_array[front]);
           front = front + 1;
      }
}
void display()
{
    int i;
    if(front == - 1)
    printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
       for(i = front; i <= rear; i++)
        printf("%c ", queue_array[i]);
         printf("\n");
    }
}
int main()
{
	int count=0,choice;
     while (count<=60)
    {
       printf("1.Insert program to printer\n");
        printf("2.Print Program from Printer\n");
       printf("3.Display waiting programs to printer\n");
        printf("4.Quit \n");
         printf("Enter your choice : ");
       scanf("%d", &choice);
       switch(choice)
       {
         case 1:
              insert();
              count++;
              break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
           exit(1);
           default:
           printf("Wrong choice n");
	       return 0;
        }
     }
   }

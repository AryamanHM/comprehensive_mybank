#include <stdio.h>
#include<stdlib.h>
#define MAX 1000
void business_insert();
void normal_insert();
void normal_dequeue();
void business_dequeue();
void display();
char normal_queue_array[MAX];
char business_queue_array[MAX];
int brear = - 1;
int bfront = - 1;
int nrear = - 1;
int nfront = - 1;
int n_count=0;
int b_count=0;
void business_insert()
{
char item;
if(brear == MAX - 1)
printf("Queue Overflow n");
else
{
if(bfront== - 1)
bfront = 0;
printf("Inset the element in queue : ");
scanf(" %c", &item);
brear = brear + 1;
business_queue_array[brear] = item;
b_count++;
}
}
void normal_insert()
{
char item;
if(nrear == MAX - 1)
printf("Queue Overflow n");
else
{
if(nfront== - 1)
nfront = 0;
printf("Inset the element in queue : ");
scanf(" %c", &item);
nrear = nrear + 1;
normal_queue_array[nrear] = item;
n_count++;
}
}
void normal_dequeue()
{
if(nfront == - 1 || nfront > nrear)
{
printf("Queue Underflow n");
return;
}
else
{
printf("Element deleted from queue is : %c\n", normal_queue_array[nfront]);
nfront = nfront + 1;
}
}
void business_dequeue()
{
if(bfront == - 1 || bfront > brear)
{
printf("Queue Underflow n");
return;
}
else
{
printf("Element deleted from queue is : %c\n", business_queue_array[bfront]);
bfront = bfront + 1;
}
}
void ndisplay()
{
int i;
if(nfront == - 1)
printf(" Normal Queue is empty \n");
else
{
printf("Normal Queue is : \n");
for(i = nfront; i <= nrear; i++)
printf(" %c", normal_queue_array[i]);
printf("\n");
}
}
void bdisplay()
{
int i;
if(bfront == - 1)
printf("Business Queue is empty \n");
else
{
printf("Business Queue is : \n");
for(i = bfront; i <= brear; i++)
printf(" %c", business_queue_array[i]);
printf("\n");
}
}
int main()
{
int choice;
printf("*********Welcome to EA Airlines***********\n");
printf("***********It's in the fLight***********\n");
while (1)
{
printf("1.Enter people in Business Class\n");
printf("2.Enter people in Normal Class\n");
printf("3.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
if(choice==3)
break;
switch(choice)
{
case 1:
    business_insert();
break;
case 2:
	normal_insert();
break;
case 3:
break;
default:
printf("Wrong choice \n");
}
}
if(b_count==n_count)
{
	while(1)
	{
		printf("1.Allow passengers to go through from queue \n");
        printf("2.Display standing passengers in queue \n");
        printf("3.Quit \n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        if(choice==3)
         break;
        switch(choice){
        	case 1:normal_dequeue();
             business_dequeue();
             break;
        case 2:bdisplay();
		       ndisplay();
			   break;
		case 3:
               exit(1);	   
		default:printf("Wrong Choice");
		}
        	        
        	
	}
}
if(n_count<(b_count/2))
{
	while(1)
	{
		printf("1.Allow passengers to go through from queue \n");
        printf("2.Display standing passengers in queue \n");
        printf("3.Quit \n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        if(choice==3)
        break;
        switch(choice){
        	case 1:business_dequeue();
             business_dequeue();
             normal_dequeue();
             break;
             case 2:bdisplay();
             ndisplay();
             break;
             case 3:exit(1);
             default:printf("Wrong Choice");
         }
	}
}

}


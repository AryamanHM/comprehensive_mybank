#include<stdio.h>
struct player
{
	int pid;
	float avgrun,avgwick;
	char name[30];
};

int i,j;
void input(struct player s[10],int n)
{
	for(i=0;i<n;i++)
	{
		printf("Enter the details of player %d\n",i+1);
	
	printf("Enter the player id: ");
	scanf("%d",&s[i].pid);
	printf("Enter the name: ");
	scanf("%s",&s[i].name);
	printf("Enter the average runs: ");
	scanf("%f",&s[i].avgrun);
	printf("Enter the average wickets: ");
	scanf("%f",&s[i].avgwick);
	}
	
}
void sort(struct player p[10],int n)
{
	for(i=0;i<n-1;i++)
	{ 
		for(j=0;j<n-1;j++)
		if(p[j].avgrun < p[j+1].avgrun)
		{
			struct player temp = p[j];
			p[j] = p[j+1];
			p[j+1] = temp;
		}
	}
}

void display(struct player s[10],int n)
{
	printf("Sorted List:\n");
	for(i=0;i<n;i++)
	{
	printf("\nPlayer id: %d",s[i].pid);
	printf("\nPlayer Name: %s",s[i].name);
	printf("\nAverage Runs: %f",s[i].avgrun);
	printf("\nAverage Wickets: %f\n",s[i].avgwick);
	}
	
}
int main()
{
	int n;
	struct player p[10];
	printf("Enter the number of records to be entered: ");
	scanf("%d",&n);
	input(p,n);
	sort(p,n);
	display(p,n);
	return 0;
}

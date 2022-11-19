#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[4][4];
void job(int a[4][4],int n)
{
	int i,j,k,amt=0;
	for(i=0;i<n;i++)
	{
		int min=100;
		for(j=0;j<n;j++)
		{
			if(a[j][i]<min)
			{
				min=a[j][i];
				k=i;
				
			}
		}
		
		amt=amt+min;
	}
	printf("Cheapest cost:Rs.%d",amt);
}
int main()
{
	int i,j,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++) //Enter n as 4 and array as {9,2,7,8},{6,4,3,7},{5,8,1,8},{7,6,9,4}
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element:");
			scanf("%d",&a[i][j]);
		}
	}
	job(a,n);
	return 0;
}

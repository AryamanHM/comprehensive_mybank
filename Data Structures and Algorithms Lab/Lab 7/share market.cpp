#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[]={40,42,44,43,46,41,47,45};
	printf("Unsorted Array:");
	int a1[]={40,42,44,43,46,41,47,45};
	int n=8,i,j,bcount=0,icount=0,scount=0,temp,key;
			for(i=0;i<n;i++)
 {
 	printf("%d,",a[i]);
 }
 printf("\n");
	//Bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a1[j]>a1[j+1])
			{
				temp=a1[j];
				a1[j]=a1[j+1];
				a1[j+1]=temp;
				++bcount;
			}
		}
	}
	printf("Sorted Array under Bubble,Insertion and Selection Sort respectively\n");
	for(i=0;i<n;i++)
 {
 	printf("%d,",a1[i]);
 }
 printf("\n");
	//Insertion sort
	int a2[]={40,42,44,43,46,41,47,45};
	int n1=8;
	i=0;
	j=0;
	for(i=0;i<n1;i++)
	{
		  key = a2[i]; 
        j = i - 1; 
  /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && a2[j] > key) { 
            a2[j + 1] = a2[j]; 
            j = j - 1; 
            ++icount;
        } 
        a2[j + 1] = key; 
    } 
    for(i=0;i<n;i++)
 {
 	printf("%d,",a2[i]);
 }
 printf("\n");
	 int min_idx; 
  int a3[]={40,42,44,43,46,41,47,45};
    // One by one move boundary of unsorted subarray
	i=0;
	j=0; 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) {
		
          if (a3[j] < a3[min_idx]) {
		  
            min_idx = j; 
}
}
        // Swap the found minimum element with the first element 
        temp=a3[min_idx];
        a3[min_idx]=a3[i];
        a3[i]=temp;
        ++scount;
    }
    for(i=0;i<n;i++)
 {
 	printf("%d,",a3[i]);
 }
 printf("\n");
    int item;
	i=0,j=0;
    //Linear searching
    printf("Enter an item to be found.\n");
    scanf("%d",&item);
    for (i = 0; i < n; i++) 
    {
        if (a[i] == item) 
        {
		printf("Item found at position %d\n",(i+1));
		break;
	}
}
 printf("Number of swaps in Bubble sort:%d\n",bcount);   
 printf("Number of swaps in Insertion sort:%d\n",icount);  
 printf("Number of swaps in Selection sort:%d\n",scount);  
return 0;
}

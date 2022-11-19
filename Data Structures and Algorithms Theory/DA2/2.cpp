#include<stdio.h>
#include<math.h>
#include <cstdlib>
int maxRepeating(int arr[], int n, int k) 
{ 
    // Iterate though input array, for every element 
    // arr[i], increment arr[arr[i]%k] by k 
    for (int i = 0; i< n; i++) 
        arr[arr[i]%k] += k; 
  
    // Find index of the maximum repeating element 
    int max = arr[0], result = 0; 
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] > max) 
        { 
            max = arr[i]; 
            result = i; 
        } 
    } 
  
    /* Uncomment this code to get the original array back 
       for (int i = 0; i< n; i++) 
          arr[i] = arr[i]%k; */
  
    // Return index of the maximum element 
    printf( "\nMax repeating element:%d",result); 
} 
void printRandoms(int arr[],int lower, int upper,  
                             int count) 
{ 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() %(upper - lower + 1)) + lower; 
        printf("%d ", num); 
        arr[i]=num;
    } 
} 


int main()
{
int n;
scanf("%d",&n);
int arr[n];
printRandoms(arr,0, n-1, n);
maxRepeating(arr,n,n);
return 0;
}

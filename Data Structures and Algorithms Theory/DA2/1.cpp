// Code to demonstrate Divide and 
// Conquer Algorithm 
#include <stdio.h> 

// function to find the maximum no. 
// in a given array. 
int DAC_Max(int a[], int index, int l) 
{ 
	int k; 

	// logic to find the Maximum element 
	// in the given array. 
	k = DAC_Max(a, index + 1, l); 

	if(a[index]%k==0)
		return a[index]; 
	else
		return k; 
} 


// Driver Code 
int main() 
{ 
	// Defining the variables 
	int  max, N; 

	// Initializing the array 
	int a[7] = { 70, 250, 50, 80, 140, 12, 14 }; 

	// recursion - DAC_Max function called 
	max = DAC_Max(a, 0, 5); 
 
	printf("The maximum number in a given array is : %d", max); 
	return 0; 
} 



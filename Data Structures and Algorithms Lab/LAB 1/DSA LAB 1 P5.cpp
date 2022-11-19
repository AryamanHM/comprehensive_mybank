#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
    int A[n][n];
    int row, col, sum = 0;

    
    printf("Enter elements in matrix  \n");
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    
    for(row=0; row<n; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    
    
    for(row=0; row<3; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }

    return 0;
}

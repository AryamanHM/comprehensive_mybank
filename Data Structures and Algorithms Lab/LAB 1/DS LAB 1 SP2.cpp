#include<stdio.h>
int main()
{
   
   int c,d;
   float difference[10][10],mult[10][10];
   float m1[3][2]= {
               {42,54},
			   {36,27},
			   {34,30}};
   float m2[3][2] = {{27,31},
               {28,15},
			   {28,22}};
   float m3[1][3]= {{0.75,0.55,1.2}};
   for (int c = 0; c < 3; c++)   
    {  
        for (int d = 0; d < 2; d++)   
        {  
            difference[c][d] = m1[c][d] - m2[c][d];    
        } 
    }
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j <2 ; ++j) {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) {
                mult[i][j] += m3[i][k] * difference[k][j];
            }
        }
    }
    float profit=0.0;
     for(int i=0;i<1;i++)
     {
     	for(int j=0;j<2;j++)
     	{
     	profit=profit+mult[i][j];
		 }
	 }
	 printf("%f",profit);
}


  
   


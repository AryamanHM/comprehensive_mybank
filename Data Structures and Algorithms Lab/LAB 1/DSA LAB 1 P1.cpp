#include<stdio.h> 
#include<string>
#include <cstring>
int main() 

{ 

    int i=0,j=0,temp; 

    char uni[10][20]={"VIT","SRM","IIT","BIT","KIT","IIIT","BBD","BRDM","PUBG","CMS"}; 

    int rating[10]={20,45,96,62,100,21,77,88,99,85}; 

    char temp_name[20]; 

    char top3[3][20]; 

    char other7[7][20]; 

    for(i=0;i<10;i++) 

    { 

        for(j=0;j<10;j++) 

        { 

            if (rating[i]>rating[j]) 

            { 

                temp=rating[i]; 

                rating[i]=rating[j]; 

                rating[j]=temp; 

 

                strcpy(temp_name,uni[i]); 

                strcpy(uni[i],uni[j]); 

                strcpy(uni[j],temp_name); 

            } 

        } 

    } 

    printf("Top 3 colleges\n\n"); 

    for(i=0;i<3;i++) 

    { 

        strcpy(top3[i],uni[i]); 

        printf("rating: %d , college_name: %s\n",rating[i],top3[i]); 

    } 

    printf("\n\nOther 7 colleges\n\n"); 

    for(i=3;i<10;i++) 

    { 

        strcpy(other7[i-3],uni[i]); 

        printf("rating: %d , college_name: %s\n",rating[i],other7[i-3]); 

    } 

} 

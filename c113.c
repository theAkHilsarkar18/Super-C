
#include<stdio.h>
main()
{
    // Write C program to addition of two matrices[2D].

    int a[100][100] = {{1,1,1},{1,1,1},{1,1,1}};

    int b[100][100] = {{1,1,1},{1,1,1},{1,1,1}};
    
    int i,j;
    
    printf("2D array of B : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }

    printf("2D array of B : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
        
    }

    printf("Sum of 2D array of A and B : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]+b[i][j]);
        }
        printf("\n");
        
    }





   
    
    



}
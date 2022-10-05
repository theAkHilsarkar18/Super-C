
#include<stdio.h>
main()
{
    // Write C program to find sum of diagonal elements of a matrix.

    int a[100][100] = {{1,2,3},{4,5,6},{7,8,9}};

    int i,j;
    
    printf("Matrix A :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");

    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i==j)
            {
                sum = sum + a[i][j];
            }
            
        }
        
    }
    printf("sum of diagonal matrix : %d",sum);
    

}
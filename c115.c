
#include<stdio.h>
main()
{
    // Write C program matrix convert into 
    
    // 123      147
    // 456 ==>  258
    // 789      369

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

    printf("transpose matrix A :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
        
    }
    printf("\n");





 



}

#include<stdio.h>
main()
{
    // Write a c program to check whether two matrices are equal or not.[2D]

    int a[100][100] = {{1,1,1},{1,1,1},{1,1,1}};

    int b[100][100] = {{1,1,1},{1,1,1},{1,2,1}};
    
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

 

    int same=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            
            if (a[i][j]!=b[i][j])
            {
                same = 1;
                break;
            }
        }
        printf("\n");
        
    }

    printf(" %d ",same);

    if (same == 1)
    {
        printf("both matrix are not same ");
    }
    else
    {
        printf(" same ");
    }
    

}
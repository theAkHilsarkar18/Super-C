// frecuincy of element in 2d array.

#include<stdio.h>
main()
{
    int a[10][10] = {{11,22,11,43,11},{22,33,54,78,11},{11,23,45,66,11},{89,54,22,11,22}};

    int i,j;

// 4 * 5 2d array

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    int count = 0;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            if (a[i][j]==11)
            {
                count ++;
            }
            
        }
        
    }

    printf("\nfre. of 11 is : %d",count);


    




}
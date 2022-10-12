// frecuincy of element in 2d array.

#include<stdio.h>
main()
{
    int a[10][10] = {{11,22,11,13,11},{22,33,54,18,11},{11,23,45,66,11},{89,54,20,11,22}};

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
    
    int n;
printf("enter which number fre. want you find ?");
scanf("%d",&n);
    int count = 0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            if (a[i][j]==n)
            {
                count ++;
            }
            
        }
        
    }

    printf("\nfre. of %d is : %d \n\n",n,count);

    // print value between 10 and 20


    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
           if (a[i][j]>=10 && a[i][j]<=20)
           {
                printf(" %d ",a[i][j]);
           }
           
        }
        printf("\n");
    }





}

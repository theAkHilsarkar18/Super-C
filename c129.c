// ascending order array 

#include<stdio.h>
main()
{
    int a[100] = {99,55,96,22,53,87,44,11,66,85,100,1,2};
    int b[100];

    // length of array
    int i,j;
   
    for(i=0; i<=100; i++)
    {
        if (a[i]==0)
        {
            break;
        }
        
    }
    //printf("length of array : %d",i);
    int len = i;

   
    int k =0;
    for(i=0; i<500; i++)
    {
        for(j=0; j<len; j++)
        {
             if (i == a[j])
             {
                //printf(" %d ",i);
                b[k] = i;
                printf(" %d ",b[k]);
                k++;
                break;
             }
             
        }
    }

        printf("\n");

    for(i=0; i<len; i++)
    {
        printf(" %d ",b[i]);
    }







}







#include<stdio.h>
main()
{
    // Write C program to print all negative elements in an array.[1D]

    int n;
    printf("enter length of array : ");
    scanf("%d",&n);

    int a[100];
    printf("enter value of array : ");

    int i;
    for(i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            printf("negative array is : %d",a[i]);
        }
        printf("\n");
    }


  



}
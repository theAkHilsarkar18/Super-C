
#include<stdio.h>
main()
{
    // Write C program to find sum of all elements of array.[1D]

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

    printf("\n==================================================================\n");

    int x=0;
    for(i=0; i<n; i++)
    {
        x = x + a[i];
    }
    printf("sum of array is : %d",x);


}
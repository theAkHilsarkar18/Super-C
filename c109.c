
#include<stdio.h>
main()
{
    // Write C program to print array in reverse order.[1D]

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

    for(i=n-1; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }


}
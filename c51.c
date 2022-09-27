
// sum of 1 to n number

#include<stdio.h>
main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int i=0,j=0;

    for(i=1; i<=a; i++)
    {
        j = j + i;
    }
    printf("sum of n number is : %d",j);
}
#include<stdio.h>
main()
{
    // to print reverse number
    int a;
    int x,temp;

    printf("enter a value : ");
    scanf("%d",&a);

    temp =a;
    while (a>0)
    {
        x = a % 10;
        printf("%d",x);
        a = a/10;
    }
    
}
#include<stdio.h>
main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    int a=1;
    while(a<=n)
    {
        printf("%d\n",a);
        a=a+2;
        
    }
}
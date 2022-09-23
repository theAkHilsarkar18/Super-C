#include<stdio.h>
main()
{
    // sum of first and last digit

    int a;
    printf("enter the value : ");
    scanf("%d",&a);

    int last;
    last = a%10;

    while (a>10)
    {
        a = a/10;
    }

    printf("first = %d\n",a);
    printf("last = %d\n\n",last);
    printf("sum = %d",a+last);
    


}

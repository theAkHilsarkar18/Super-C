//  Write C program to find sum of first and last digit of a number.

#include<stdio.h>
main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    // for last digit

    int last = a%10;
   
    
    for(int i=1; a>9; i++)
    {
        a = a/10;

    }
    
    printf("first number is : %d\n",a);
    printf("last digit is : %d\n\n",last);

    printf("sum of first and last digit : %d\n",a+last);
}
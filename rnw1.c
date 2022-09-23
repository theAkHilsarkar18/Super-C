// swaping of two number

#include<stdio.h>
int main()
{
    int a=10;
    int b=20;

    a=a+a+a;
    a=a-b;
    printf("value of a : %d\n",a);

    b=b-a;
    b=b+b;
    printf("value of b : %d",b);
}
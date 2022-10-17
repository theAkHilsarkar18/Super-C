// infinite calc by udf only sum

#include<stdio.h>

//udf

void calc()
{
    printf("enter two value : ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum = %d\n",a+b);
    calc();

    
    
}

main()
{
    calc();
}
